#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    map<char, char> m;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
        m[a[i]] = b[i];
    cin.get();
    string s;
    for (getline(cin, s); !cin.eof(); getline(cin, s))
    {
        for (string::iterator it = s.begin(); it < s.end(); it++)
            if (m.find(*it) != m.end())
                *it = m[*it];
        cout << s << endl;
    }
}
