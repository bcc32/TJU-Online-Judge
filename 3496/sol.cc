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
        cout << add(a, b) << endl << endl;
    }
}

string add(string a, string b)
{
    string s;
    bool c = false;
    for (int i = 0; i < a.size() || i < b.size(); i++)
    {
        int x = 0;
        if (i < a.size())
            x += (int)(a[i] - '0');
        if (i < b.size())
            x += (int)(b[i] - '0');
        if (c) x++;
        c = x > 9;
        s += (char)(x % 10) + '0';
    }
    if (c)
        s += '1';
    reverse(s.begin(), s.end());
    return s;
}
