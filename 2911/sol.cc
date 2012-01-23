#include <iostream>
#include <set>
#include <map>
using namespace std;

map<string, string> m;
string plural(string s);

int main(void)
{
    int l, n;
    cin >> l >> n;
    for (int i = 0; i < l; i++)
    {
        string a, b;
        cin >> a >> b;
        m[a] = b;
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cout << plural(s) << endl;
    }
}

string plural(string s)
{
    if (m.find(s) != m.end())
        return m[s];
    char x = s[s.size() - 2], y = s[s.size() - 1];
    if (x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' && y == 'y')
        return s.substr(0, s.size() - 1) + "ies";
    if (y == 'o' || y == 's' || (x == 'c' && y == 'h') ||
        (x == 's' && y == 'h') || y == 'x')
        return s + "es";
    return s + "s";
}
