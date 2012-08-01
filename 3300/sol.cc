#include <iostream>
#include <vector>
#include <map>
using namespace std;

int phi(int);

int main(void)
{
    map<int, int> m;
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
    {
        int s = 0;
        for (int i = a; i <= b; i++)
        {
            if (m.find(i) == m.end())
                m[i] = phi(i);
            s += m[i];
        }
        cout << s << endl;
    }
}

int phi(int n)
{
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
