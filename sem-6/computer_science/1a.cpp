#include <iostream>
#include <fstream>
#include <string.h>
#include "reverse.h"
using namespace std;

int main()
{
	string rv,s;
	fstream f1,f2;
	int len,i;
	f1.open("str.txt",ios::in);
	f2.open("rev.txt",ios::out);
	while(!f1.eof())
	{	
		s.erase();
		f1>>s;
		rv.erase();
		rv=rev(s);
		f2<<rv<<"\n";
	}
	return 0;
}

