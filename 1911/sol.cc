#include <iostream>
#define vowelq(c) \
    ((c) == 'a' || (c) == 'e' || (c) == 'i' || (c) == 'o' ||  (c) == 'u')
using namespace std;

bool t1(string s);
bool t2(string s);
bool t3(string s);

int main(void)
{
    string s;
    for (cin >> s; !cin.eof(); cin >> s)
    {
        if (t1(s) && t2(s) && t3(s))
            cout << "<" << s << "> is acceptable." << endl;
        else
            cout << "<" << s << "> is not acceptable." << endl;
    }
}

bool t1(string s)
{
    for (string::iterator it = s.begin(); it < s.end(); it++)
        if (vowelq(*it)) return true;
    return false;
}

bool t2(string s)
{
    int b1 = 0, b2 = 0;
    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        if ((vowelq(*it) && b1 == 1 && b2 == 1) ||
            (!vowelq(*it) && b1 == 2 && b2 == 2))
            return false;
        b1 = b2;
        b2 = vowelq(*it) ? 1 : 2;
    }
    return true;
}

bool t3(string s)
{
    char l = ' ';
    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        if (*it == l && l != 'e' && l != 'o') return false;
        l = *it;
    }
    return true;
}
