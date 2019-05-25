#include <string>
#include <sstream>
using namespace std;
string rev(string c)
{
	int l;
	string s;
	l = c.length() - 1;
	for (; l >= 0; l--)
	{
		s += c[l];
	}
	return s;
}
