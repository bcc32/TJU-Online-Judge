#include <iostream>
#include <map>
using namespace std;

bool primeq(int n);

int main(void)
{
    map<int, bool> p;
    for (int i = 0; i < 1000000; i++)
        if (primeq(i)) p[i] = true;
        else p[i] = false;
    int L, U;
    for (cin >> L >> U; L != -1 || U != -1; cin >> L >> U)
    {
        int c = 0, d = 0;
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
