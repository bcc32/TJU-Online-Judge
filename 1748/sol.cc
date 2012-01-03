#include <iostream>
using namespace std;

int powm10(int b, int e);

int main(void)
{
    int m, n;
    for (cin >> m >> n; m != 0 || n != 0; cin >> m >> n)
        cout << powm10(m, n) << endl;
}

int powm10(int b, int e)
{
    int p = 1;
    b %= 10;
    e %= 4;
    for (int i = 0; i < e; i++)
        p *= b;
    return p % 10;
}
