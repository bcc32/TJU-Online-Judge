#include <iostream>
using namespace std;

int nfactor(int n);

int main(void)
{
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
    {
        int c = 0;
        for (int i = a; i <= b; i++)
            if (i % nfactor(i) == 0) c++;
        cout << c << endl;
    }
}

int nfactor(int n)
{
    int i, c = 0;
    for (i = 1; i * i < n; i++)
        if (n % i == 0) c += 2;
    if (i * i == n) c++;
    return c;
}
