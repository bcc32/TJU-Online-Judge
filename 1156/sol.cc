#include <iostream>
using namespace std;

int num(string s, int b, int sdigits)
{
    int a = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int p = 1;
        for (int j = 0; j < i; j++)
        {
            p *= b;
            p %= sdigits;
        }
        a += p * ((int)s[s.size() - i - 1] - (int)'0');
        a %= sdigits;
    }
    return a;
}

int sdig(string s)
{
    int a = 0;
    for (string::iterator it = s.begin(); it < s.end(); ++it)
        a += (int)*it - (int)'0';
    return a;
}

int main(void)
{
    int b;
    string s;
    for (cin >> b; b != 0; cin >> b)
    {
        cin.ignore(1, ' ');
        cin >> s;
        if (num(s, b, sdig(s)) == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
