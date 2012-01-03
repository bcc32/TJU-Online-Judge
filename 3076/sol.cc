#include <iostream>
#include <cstdlib>
using namespace std;

bool isprime(int n);

int main(void)
{
    int *p = (int *) malloc(100000 * sizeof(int));
    int c = 0;
    for (int i = 2; i <= 1299709; i++)
        if (isprime(i))
            p[c++] = i;
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        if (isprime(n))
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < 99999; i++)
        {
            if (p[i] < n && n < p[i + 1])
            {
                cout << p[i + 1] - p[i] << endl;
                break;
            }
        }
    }
}

bool isprime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
