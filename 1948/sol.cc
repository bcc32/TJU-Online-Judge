#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int ctoi(char c);
char itoc(int n);
int atoi(string s, int b);
string itoa(int n, int b);

int main(void)
{
	string s;
	int f, b;
	for (cin >> s >> f >> b; !cin.eof(); cin >> s >> f >> b)
	{
		int n = atoi(s, f);
		string m = itoa(n, b);
		printf("%7s\n", (m.size() <= 7 ? m.c_str() : "ERROR"));
	}
}

int ctoi(char c)
{
	if (c >= '0' && c <= '9')
		return (int)c - (int)'0';
	else if (c >= 'A' && c <= 'Z')
		return (int)c - (int)'A' + 10;
	else return 0;
}

char itoc(int n)
{
	if (n < 10)
		return (char)n + '0';
	else if (n < 16)
		return (char)n + 'A' - 10;
	else return 0;
}

int atoi(string s, int b)
{
	int c = 0;
	for (string::iterator it = s.begin(); it < s.end(); ++it)
	{
		c *= b;
		c += ctoi(*it);
	}
	return c;
}

string itoa(int n, int b)
{
	string s;
	while (n > 0)
	{
		s += itoc(n % b);
		n /= b;
	}
	reverse(s.begin(), s.end());
	return s;
}
