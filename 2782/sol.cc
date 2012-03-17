#include <iostream>
#include <algorithm>
using namespace std;

string trans(string s);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;
        s = trans(s);
        t = trans(t);
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        cout << (s == t ? "Yes" : "No") << endl;
    }
}

string trans(string s)
{
    string t = s;
    for (string::iterator it = t.begin(); it < t.end(); ++it)
        if (*it >= 'A' && *it <= 'Z')
            *it += 32;
    return t;
}
