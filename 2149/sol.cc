#include <iostream>
#include <algorithm>
using namespace std;

string add(string a, string b);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        cout << i + 1 << " " << add(a, b) << endl;
    }
}

string add(string a, string b)
{
    string s;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    bool c = false;
    for (int i = 0; i < a.size() || i < b.size(); i++)
    {
        int x = 0;
        if (i < a.size() && a[i] == '1') x++;
        if (i < b.size() && b[i] == '1') x++;
        if (c) x++;
        if (x > 1)
        {
            c = true;
            x %= 2;
        }
        else
            c = false;
        s += (char)(x + (int)'0');
    }
    if (c)
        s += '1';
    reverse(s.begin(), s.end());
    while (s[0] == '0')
        s =  s.substr(1);
    return s;
}
