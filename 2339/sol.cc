#include <iostream>
using namespace std;

int ndiv(long long n);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        cout << "Scenario #" << i + 1 << ":" << endl << (ndiv(x * x) + 1) / 2
            << endl << endl;
    }
}

int ndiv(long long n)
{
    long long i, c = 0;
    for (i = 1; i * i < n; i++)
        if (n % i == 0) c++;
    c *= 2;
    if (i * i == n) c++;
    return c;
}
