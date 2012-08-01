#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, int> m;

int gcd(int, int);
int phi(int);

int main(void)
{
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
    {
        int s = 0;
        for (int i = a; i <= b; i++)
            s += phi(i);
        cout << s << endl;
    }
}

int gcd(int a, int b)
{
    if (a < b)
        return gcd(b, a);
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int phi(int n)
{
    if (m.find(n) != m.end())
        return m[n];
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0 && gcd(i, n / i) == 1)
            return phi(i) * phi(n / i);
    vector<int> pf;
    int foo = n;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            pf.push_back(i);
            while (n % i == 0)
                n /= i;
        }
    if (n > 1)
        pf.push_back(n);
    for (vector<int>::iterator it = pf.begin(); it < pf.end(); ++it)
        foo = foo * (*it - 1) / *it;
    return foo;
}
