#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
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

	string usn_list[100];
	int address_list[100];
	int count;

	void read_data();
	void pack();
	void write_to_file();

	void create_index();

	void remove(string);
	void search(string);
	int search_index(string);
	string extract_usn();
	void sort_index();
};
void Student::read_data()
{
	cout << "usn:";
	cin >> usn;
	cout << "name:";
	cin >> name;
	cout << "branch:";
	cin >> branch;
	cout << "semester:";
	cin >> sem;
}

void Student::pack()
{
	string temp;
	buffer.erase();
	buffer += usn + "|" + name + "|" + branch + "|" + sem + "$" + "\n";
}

void Student::write_to_file()
{
	int pos;
	fstream file;
	file.open("5.txt", ios::out | ios::app);
	pos = file.tellp();
	file << buffer;
	file.close();

	usn_list[++count] = usn;
	address_list[count] = pos;
	sort_index();
}

string Student::extract_usn()
{
	string usn;
	int i = 0;

	usn.erase();
	while (buffer[i] != '|')
		usn += buffer[i++];
	return usn;
}
void Student::create_index()
{ 
	fstream file;
	int pos;
	string usn;
	count = -1;
	file.open("5.txt", ios::in);
	while (!file.eof())
	{
		pos = file.tellg();
		buffer.erase();
		getline(file, buffer);

		if (buffer[0] != '*')
		{
			if (buffer.empty())
				break;
			usn = extract_usn();
			usn_list[++count] = usn;
			address_list[count] = pos;
		}
	}
	file.close();
	sort_index();
	buffer.erase();
}

void Student::sort_index()
{
	int i, j, temp_Address;
	string temp_usn;

	for (int i = 0; i <= count; i++)
	{
		for (int j = i + 1; j <= count; j++)
		{
			if (usn_list[i] > usn_list[j])
			{
				temp_usn = usn_list[i];
				usn_list[i] = usn_list[j];
				usn_list[j] = temp_usn;

				temp_Address = address_list[i];
				address_list[i] = address_list[j];
				address_list[j] = temp_Address;
			}
		}
	}
	for (i = 0; i <= count; i++)
	{
		cout << usn_list[i] << "\t" << address_list[i] << "\n";
	}
}

int Student::search_index(string key)
{
	int low = 0, high = count, mid = 0, flag = 0, pos;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (usn_list[mid] == key)
		{
			flag = 1;
			break;
		}
		if (usn_list[mid] > key)
			high = mid - 1;
		if (usn_list[mid] < key)
			low = mid + 1;
	}

	if (flag)
		return mid;
	else
		return -1;
}

void Student::search(string key)
{
	int pos = 0, address;
	fstream file;
	buffer.erase();
	pos = search_index(key);
	if (pos == -1)
		cout << endl
			 << "record not found" << endl;
	else if (pos >= 0)
	{
		file.open("5.txt");
		address = address_list[pos];
		file.seekp(address, ios::beg);
		getline(file, buffer);
		cout << "record found....\n"
			 << buffer;
		file.close();
	}
}

void Student::remove(string key)
{
	int pos = 0, i, address;
	fstream file;
	pos = search_index(key);
	if (pos >= 0)
	{
		file.open("5.txt", ios::out | ios::in);
		address = address_list[pos];
		file.seekp(address, ios::beg);
		file.put('*');
		file.close();
		cout << "\nRecord Deleted: ";

		for (i = pos; i < count; i++)
		{
			usn_list[i] = usn_list[i + 1];
			address_list[i] = address_list[i + 1];
		}
		count--;
	}
	else
		cout << "record not found\n";
}

int main()
{
	int choice, count, i;
	string key;
	Student s1;

	s1.create_index();

	while (1)
	{
		cout << "\nMain Menu\n--------\n1.Add \n2.Search \n3.Delete\n4.Exit\n---------\n";
		cout << "Enter the choice:";
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
			system("clear");
			cout << "\nEnter the usn\n";
			cin >> key;
			s1.search(key);
			break;
		case 3:
			cout << "\n\nEnter the usn\n";
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
