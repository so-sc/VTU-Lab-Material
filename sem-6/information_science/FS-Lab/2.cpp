#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Student
{
public:
	string usn;
	string name;
	string branch;
	string sem;
	string buffer;

	void read_data();
	void pack();
	void write_to_file();
	void unpack();
	int search(string);
	int delete_from_file(string);
	void modify(string);
};

void Student::read_data()
{
	cout << "USN:";
	cin >> usn;
	cout << "Name:";
	cin >> name;
	cout << "Branch:";
	cin >> branch;
	cout << "Semester:";
	cin >> sem;
}

void Student::pack()
{

	string temp;
	buffer.erase();
	buffer += usn + "|" + name + "|" + branch + "|" + sem + "$";
	for (; buffer.size() < 100;)
		buffer += '$';
	buffer += '\n';
}

void Student::write_to_file()
{

	fstream file;
	file.open("2.txt", ios::out | ios::app);
	file << buffer;
	file.close();
}

void Student::unpack()
{
	int ch = 1, i = 0;
	usn.erase();
	while (buffer[i] != '|')
		usn += buffer[i++];

	name.erase();
	i++;
	while (buffer[i] != '|')
		name += buffer[i++];
	branch.erase();

	i++;
	while (buffer[i] != '|')
		branch += buffer[i++];
	sem.erase();

	i++;
	while (buffer[i] != '$')
		sem += buffer[i++];
}

int Student::search(string key)
{
	ifstream file;
	int flag = 0, pos = 0;
	file.open("2.txt", ios::in);
	while (!file.eof())
	{
		buffer.erase();
		pos = file.tellg();
		getline(file, buffer);
		unpack();
		if (key == usn)
		{
			cout << "\nfound the key .the record is...\n"
				 << buffer;
			flag = 1;
			return pos;
		}
	}
	file.close();
	if (flag == 0)
	{
		cout << "\nnot found..\n";
		return -1;
	}
}

int Student::delete_from_file(string key)
{
	fstream file;
	int pos, flag = 0;
	pos = search(key);
	if (pos >= 0)
	{
		file.open("2.txt");
		file.seekp(pos, ios::beg);
		file.put('*');
		flag = 1;
		file.close();
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}

void Student::modify(string key)
{

	int c;
	if (delete_from_file(key))
	{
		cout << "\nwhat to modify\n1:usn  2:name  3:branch  4:semester\n";
		cin >> c;
		switch (c)
		{
		case 1:
			cout << "usn:\n";
			cin >> usn;
			break;

		case 2:
			cout << "name:\n";
			cin >> name;
			break;

		case 3:
			cout << "branch:\n";
			cin >> branch;
			break;

		case 4:
			cout << "semester:\n";
			cin >> sem;
			break;

		default:
			cout << "wrong choice\n";
		}
		pack();
		write_to_file();
	}
}

int main()
{
	int count, choice, i;
	Student s1;
	string key;
	// system("clear");
	while (1)
	{
		cout << "\nmain menu\n1.add\n2.delete\n3.modify\n4.search\n5.exit ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\nhow many records to insert\n";
			cin >> count;
			for (i = 0; i < count; i++)
			{
				cout << "data\n";
				s1.read_data();
				s1.pack();
				s1.write_to_file();
			}
			break;
		case 2:
			cout << "\nenter the key...\n";
			cin >> key;
			i = s1.delete_from_file(key);
			if (i == 1)
				cout << "record deleted\n";
			else
				cout << "record not deleted\n";
			break;
		case 3:
			cout << "enter the key\n";
			cin >> key;
			s1.modify(key);
			break;
		case 4:
			cout << "enter the key\n";
			cin >> key;
			i = s1.search(key);
			break;
		case 5:
			return 0;
		default:
			cout << "wrong choice....";
		}
	}
	return 0;
}
