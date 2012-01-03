#include <iostream>
#include <algorithm>
using namespace std;

string bin(int d); // reverse binary representation of decimal integer
int dec(string b); // decimal representation of reversed binary integer

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        string s = bin(n);
        reverse(s.begin(), s.end());
        cout << dec(s) << endl;
    }
}

string bin(int d)
{
    string s;
    while (d >= 1)
    {
        s += (char)(d % 2) + '0';
        d >>= 1;
    }
    return s;
}

int dec(string b)
{
    int d = 0;
    for (int i = 0; i < b.size(); i++)
        d += ((int)b[i] - (int)'0') << i;
    return d;
}
