#include <iostream>
#include <algorithm>
using namespace std;

string add(string a, string b);

int main(void)
{
    int n;
    cin >> n;
    string a = "1", b = "1";
    for (int i = 2; i < n; i++)
    {
        string t = add(a, b);
        a = b;
        b = t;
    }
    cout << b << endl;
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
        if (i < a.size())
            x += (int)a[i] - (int)'0';
        if (i < b.size())
            x += (int)b[i] - (int)'0';
        if (c)
            x++;
        c = x > 9;
        s += (char)(x % 10) + '0';
    }
    if (c)
        s += '1';
    reverse(s.begin(), s.end());
    return s;
}
