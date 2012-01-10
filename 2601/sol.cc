#include <iostream>
using namespace std;

bool primeq(int n);

int main(void)
{
    int a, d, n;
    for (cin >> a >> d >> n; a != 0 || d != 0 || n != 0; cin >> a >> d >> n)
    {
        int i, c = 0;
        for (i = 0; c < n; i++)
            if (primeq(a + i * d))
                c++;
        cout << a + (i - 1) * d << endl;
    }
}

bool primeq(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
