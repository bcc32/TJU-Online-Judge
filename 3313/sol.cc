#include <iostream>
using namespace std;

int powm(int b, int e, int m);
int f(int n, int m);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << f(a, b) << endl;
    }
}

int powm(int b, int e, int m)
{
    if (e == 0)
        return 1;
    int p = 1;
    for (int i = 0; i < e; i++)
    {
        p *= b;
        p %= m;
    }
    return p;
}

int f(int n, int m)
{
    if (n == 0) return 1;
    else
        return powm(n % 10, f(n / 10, m), m);
}

