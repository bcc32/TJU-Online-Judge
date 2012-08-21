#include <iostream>
#include <sstream>
using namespace std;

string bin(int);

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int h, m, s;
        string H, M, S;
        cin >> h;
        H = bin(h);
        cin.ignore(1, ':');
        cin >> m;
        M = bin(m);
        cin.ignore(1, ':');
        cin >> s;
        S = bin(s);
        cout << i + 1 << " ";
        for (int j = 0; j < 6; j++)
            cout << H[j] << M[j] << S[j];
        cout << " " << H << M << S << endl;
    }
}

string bin(int n)
{
    ostringstream ss;
    for (int i = 0; i < 6; i++)
    {
        ss << n % 2;
        n /= 2;
    }
    string s = ss.str();
    return string(s.rbegin(), s.rend());
}
