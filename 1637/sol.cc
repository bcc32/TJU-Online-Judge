#include <iostream>
using namespace std;

int digsum(int, int);

int main(void)
{
    for (int i = 2992; i < 10000; i++)
    {
        int t = digsum(i, 10);
        int h = digsum(i, 16);
        int d = digsum(i, 12);
        if (t == h && t == d)
            cout << i << endl;
    }
}

int digsum(int n, int base)
{
    int s = 0;
    while (n > 0)
    {
        s += n % base;
        n /= base;
    }
    return s;
}
