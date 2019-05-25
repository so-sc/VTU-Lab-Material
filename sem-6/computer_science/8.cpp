#include <string.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
class filelist
{
	char list[10][20];
	int n;

public:
	void merger();
	void input(char filename[]);
};

char merge1[80][20];
int m = 0;

void filelist::merger()
{
	cout << m;
	int i, j, k;
	char output[100][20];
	i = 0;
	j = 0;
	k = 0;
	while (i < n && j < m)
	{

		if (strcmp(list[i], merge1[j]) < 0 || strcmp(list[i], merge1[j]) == 0)
			strcpy(output[k++], list[i++]);
		else
			strcpy(output[k++], merge1[j++]);
	}
	while (i < n)
		strcpy(output[k++], list[i++]);
	while (j < m)
		strcpy(output[k++], merge1[j++]);
	i = 0;
	while (i < k)
	{
		strcpy(merge1[i], output[i]);
		i++;
	}
	m = k;
}

void filelist::input(char filename[])
{
	int i = 0;
	fstream out(filename, ios::out);
	cout << "Enter the no of names: ";
	cin >> n;
	cout << "Enter the names  \n";
	while (i < n)
	{
		cin >> list[i];
		out << list[i++];
		out << '\n';
	}
	out.close();
	int j, k;
	char temp[20];
	for (j = 0; j < n; j++)
	{
		for (k = j + 1; k < n; k++)
		{
			if (strcmp(list[j], list[k]) > 0)
			{
				strcpy(temp, list[k]);
				strcpy(list[k], list[j]);
				strcpy(list[j], temp);
			}
		}
	}
}

main()
{
	int i = 0, files;
	filelist t1;
	char filename[30];
	fstream file("output.txt", ios::out);
	cout << endl
		 << "Enter how many files:";
	cin >> files;
	int j;
	for (j = 0; j < files; j++)
	{
		cout << "Enter name of " << j + 1 << " file: ";
		cin >> filename;
		t1.input(filename);
		t1.merger();
	}
	cout << endl
		 << "Cosequential merging is:" << endl;
	while (i < m)
	{
		file << merge1[i];
		file << '\n';
		i++;
	}
	file.close();
	system("cat output.txt");
}
