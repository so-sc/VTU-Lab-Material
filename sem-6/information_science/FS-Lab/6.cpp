#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Student
{
public:
	string usn;
	string name;
	string branch;
	string sem;
	string buffer;

	string name_list[100];
	int address_list[100];
	int count;
	Student() { count = -1; }
	void read_data();
	void pack();
	void write_to_file();

	void disp();
	void remove(string);
	void delete_from_file(int);
	void search(string);
	int search_index(string);
	void read_from_file(int);
	void sort_index();
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
	buffer.erase();
	buffer += usn + "|" + name + "|" + branch + "|" + sem + "$" + "\n";
}

void Student::write_to_file()
{
	int pos;
	fstream file;
	file.open("6a.txt", ios::out | ios::app);
	pos = file.tellp();
	file << buffer;
	file.close();

	name_list[++count] = name;
	address_list[count] = pos;
	sort_index();
}

void Student::disp()
{
	int i;
	cout << endl
		 << "INDEX FILE " << endl;
	for (i = 0; i <= count; i++)
		cout << endl
			 << name_list[i] << "  " << address_list[i];
	cout << "\n";
	system("cat 6a.txt");
}

void Student::sort_index()
{
	int i, j, temp_address;
	string temp_Name;

	for (int i = 0; i <= count; i++)
	{
		for (int j = i + 1; j <= count; j++)
		{
			if (name_list[i] > name_list[j])
			{
				temp_Name = name_list[i];
				name_list[i] = name_list[j];
				name_list[j] = temp_Name;

				temp_address = address_list[i];
				address_list[i] = address_list[j];
				address_list[j] = temp_address;
			}
		}
	}
}

int Student::search_index(string key)
{
	int low = 0, high = count, mid = 0, flag = 0, pos;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (name_list[mid] == key)
		{
			flag = 1;
			break;
		}
		if (name_list[mid] > key)
			high = mid - 1;
		if (name_list[mid] < key)
			low = mid + 1;
	}

	if (flag)
		return mid;
	else
		return -1;
}

void Student::search(string key)
{
	int pos = 0, t;
	string buffer;
	buffer.erase();
	pos = search_index(key);
	if (pos == -1)
		cout << endl
			 << "Record not found" << endl;
	else if (pos >= 0)
	{
		read_from_file(pos);
		t = pos;
		while (name_list[++t] == key && t <= count)
		read_from_file(t);
		t = pos;
		while (name_list[--t] == key && t >= 0)
			read_from_file(t);
	}
}

void Student::read_from_file(int pos)
{
	int address, i;
	fstream file;
	file.open("6a.txt", ios::in | ios::app);
	address = address_list[pos];
	file.seekp(address, ios::beg);
	buffer.erase();
	getline(file, buffer);
	cout << "\nFound the record:\n"
		 << buffer;
	file.close();
}

void Student::remove(string key)
{
	int pos = 0, t, choice;
	string buffer;
	buffer.erase();
	pos = search_index(key);
	if (pos == -1)
		cout << endl
			 << "Not possible to remove.";
	else if (pos >= 0)
	{
		read_from_file(pos);
		cout << "\nDelete?(1/0):";
		cin >> choice;
		if (choice)
			delete_from_file(pos);
		t = pos;
		while (name_list[++t] == key)
		{
			read_from_file(t);
			cout << "\nDelete?";
			cin >> choice;
			if (choice)
				delete_from_file(t);
		}
		t = pos;
		while (name_list[--t] == key)
		{
			read_from_file(t);
			cout << "\nDelete?";
			cin >> choice;
			if (choice)
				delete_from_file(t);
		}
	}
}

void Student::delete_from_file(int pos)
{
	int i, address;
	fstream file;
	file.open("6a.txt");
	address = address_list[pos];
	file.seekp(address, ios::beg);
	file.put('*');
	cout << "\nRecord Deleted: ";

	for (i = pos; i < count; i++)
	{
		name_list[i] = name_list[i + 1];
		address_list[i] = address_list[i + 1];
	}
	count--;
}

int main()
{
	int choice, count, i;
	string key;
	Student s1;

	while (1)
	{
		cout << "\nMain Menu\n--------\n1.Add \n2.Search \n3.Delete\n4.Exit\n---------\n";
		cout << "Enter the choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\nEnter the number of records to insert:";
			cin >> count;
			for (i = 0; i < count; i++)
			{
				cout << "Data\n";
				s1.read_data();
				s1.pack();
				s1.write_to_file();
			}
			break;
		case 2:
			// system("clear");
			s1.disp();
			cout << "\nEnter the name:";
			cin >> key;
			s1.search(key);
			break;
		case 3:
			cout << "\n\nEnter the name:";
			cin >> key;
			s1.remove(key);
			break;
		case 4:
			return 0;
		default:
			cout << "\n\nWrong choice\n";
			break;
		}
	}
}
