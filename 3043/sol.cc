#include <iostream>
#include <vector>
#define min(x, y) ((x) < (y) ? (x) : (y))
#define max(x, y) ((x) > (y) ? (x) : (y))
using namespace std;

bool primeq(int n);

int main(void)
{
    vector<bool> p(1000000);
    for (int i = 0; i < 1000000; i++)
        p[i] = primeq(i);
    int L, U;
    for (cin >> L >> U; L != -1 || U != -1; cin >> L >> U)
    {
        int c = 0, d = 0;
        L = max(L, 0);
        U = min(U, 999999);
        for (int i = L; i <= U; i++)
            if (p[i])
            {
                c++;
                if (i % 4 == 1)
                    d++;
            }
        cout << L << " " << U << " " << c << " " << d << endl;
    }
}

bool primeq(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
