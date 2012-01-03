#include <iostream>
using namespace std;

bool substr(string s, string t);

int main(void)
{
    string s, t;
    for (cin >> s >> t; !cin.eof(); cin >> s >> t)
        if (substr(s, t))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
}

bool substr(string s, string t)
{
    if (s.size() == 0) return true;
    if (t.size() == 0) return false;
    if (s[0] == t[0])
        return substr(s.substr(1), t.substr(1));
    else return substr(s, t.substr(1));
}
