#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Coseq
{
private:
	string list1[100], list2[100];
	int count1, count2;

public:
	void load_list();
	void sort_list();
	void match();
};

void Coseq::load_list()
{
	fstream file;
	string name;
	count1 = -1;
	count2 = -1;

	file.open("name1.txt");
	while (!file.eof())
	{
		name.erase();
		getline(file, name);
		list1[++count1] = name;
	}
	file.close();

	file.open("name2.txt");
	while (!file.eof())
	{
		name.erase();
		getline(file, name);
		list2[++count2] = name;
	}
	file.close();
}

void Coseq::sort_list()
{
	int i, j;
	string temp;
	for (i = 0; i <= count1; i++)
	{
		for (j = i + 1; j < count1; j++)
		{
			if (list1[i] > list1[j])
			{
				temp = list1[i];
				list1[i] = list1[j];
				list1[j] = temp;
			}
		}
	}
	for (i = 0; i < count2; i++)
	{
		for (j = i + 1; j <= count2; j++)
		{
			if (list2[i] > list2[j])
			{
				temp = list2[i];
				list2[i] = list2[j];
				list2[j] = temp;
			}
		}
	}
}
void Coseq::match()
{
	int i = 0, j = 0, flag = 0;
	while (i <= count1 && j <= count2)
	{
		if (list1[i] == list2[j])
		{
			cout << list1[i] << "\n";
			i++;
			j++;
			flag = 1;
		}
		if (list1[i] < list2[j])
			i++;
		if (list1[i] > list2[j])
			j++;
	}
	if (flag == 0)
		cout << "No match found\n";
}
int main()
{
	Coseq c1;
	c1.load_list();
	c1.sort_list();
	c1.match();
	return 0;
}
