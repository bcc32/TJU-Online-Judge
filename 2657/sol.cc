#include <iostream>
#include <algorithm>
using namespace std;

void j(string& s);
void c(string& s);
void e(string& s);
void a(string& s);
void p(string& s);
void m(string& s);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, x;
        cin >> s >> x;
        for (string::iterator it = s.end() - 1; it >= s.begin(); it--)
            if (*it == 'J') j(x);
            else if (*it == 'C') c(x);
            else if (*it == 'E') e(x);
            else if (*it == 'A') a(x);
            else if (*it == 'P') p(x);
            else if (*it == 'M') m(x);
        cout << x << endl;
    }
}

void j(string& s)
{
    rotate(s.begin(), s.end() - 1, s.end());
}

void c(string& s)
{
    rotate(s.begin(), s.begin() + 1, s.end());
}

void e(string &s)
{
    if (s.size() % 2 == 0)
        s = s.substr(s.size() / 2) + s.substr(0, s.size() / 2);
    else
        s = s.substr(s.size() / 2 + 1) + s[s.size() / 2] +
            s.substr(0, s.size() / 2);
}

void a(string &s)
{
    reverse(s.begin(), s.end());
}

void p(string& s)
{
    for (string::iterator it = s.begin(); it < s.end(); it++)
        if (*it >= '1' && *it <= '9') (*it)--;
        else if (*it == '0') *it = '9';
}

void m(string& s)
{
    for (string::iterator it = s.begin(); it < s.end(); it++)
        if (*it >= '0' && *it <= '8') (*it)++;
        else if (*it == '9') *it = '0';
}
