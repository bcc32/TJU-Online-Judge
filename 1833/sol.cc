#include <iostream>
#include <string>
#define d(c) (char)(((int)c - (int)'A' + 21) % 26 + (int)'A')
using namespace std;

int main (void)
{
    string s;
    for (getline(cin, s); s != "ENDOFINPUT"; getline(cin, s))
    {
        getline(cin, s);
        for (string::iterator it = s.begin(); it < s.end(); it++)
            if (*it >= 'A' && *it <= 'Z')
                cout << d(*it);
            else cout << *it;
        cout << endl;
        getline(cin, s);
    }
}
