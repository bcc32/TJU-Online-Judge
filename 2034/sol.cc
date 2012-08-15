#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; !cin.eof(); cin >> n)
    {
        int p = 1;
        for (int i = 2; i <= n; i++)
        {
            p = p * i;
            while (p % 10 == 0)
                p /= 10;
            p %= 100;
        }
        printf("%5d -> %d\n", n, p % 10);
    }
}
