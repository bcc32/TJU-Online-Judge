#include <iostream>
using namespace std;

string ritoa(int n);
int atoi(string s);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        string x = ritoa(a);
        string y = ritoa(b);
        cout << atoi(x) + atoi(y) << endl << endl;
    }
}

string ritoa(int n)
{
    string s;
    while (n > 0)
    {
        s += (char)(n % 10) + '0';
        n /= 10;
    }
    return s;
}

int atoi(string s)
{
    int n = 0;
    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        n *= 10;
        n += (int)(*it - '0');
    }
    return n;
}
