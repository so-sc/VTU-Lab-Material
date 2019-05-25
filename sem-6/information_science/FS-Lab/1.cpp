#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include "reverse.h"
using namespace std;
int main()
{
	int choice;
	string name, rv, s, infile, outfile;
	fstream f1, f2;
	int len, i, count;
	while (1)
	{
		cout << "Enter your choice \n 1. From Standard I/O\n 2. From File\n 3.Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "From Standard I/O\n";
			cout << "How many?\n";
			cin >> count;
			while (count--)
			{
				cout << "\nName:";
				cin >> name;
				rv = rev(name);
				cout << "Reverse:" << rv << endl;
			}
			break;
		case 2:
			f1.open("str.txt", ios::in);
			cout << "Input file : str.txt\n";
			f2.open("rev.txt", ios::out);
			cout << "Output file : rev.txt\n";
			while (!f1.eof())
			{
				s.erase();
				f1 >> s;
				rv.erase();
				rv = rev(s);
				f2 << rv << "\n";
			}
			cout << " Reversed contents copied\n";
			break;
		case 3:
			return (0);
		}
	}
}
