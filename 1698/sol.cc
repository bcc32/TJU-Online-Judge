#include <iostream>
#define next(i) ((i) == 9 ? 7 : (i) == 7 ? 3 : 9)
using namespace std;

int cksum(int a, int n, int b);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Scenario #" << i + 1 << ":" << endl;
        int a, b;
        cin >> a;
        cin.get(); // ignore '?'
        cin >> b;
        int n;
        for (n = 0; n < 10; n++)
            if (cksum(a, n, b) % 10 == 0)
                break;
        cout << a << n << b << endl;
    }
}

int cksum(int a, int n, int b) // FIXME WRONG DIRECTION
{
    int s = 0;
    int k;
    for (k = 9; a > 0; k = next(k))
    {
        s += k * (a / 10);
        a %= 10;
    }
    s += k * n;
    for (k = next(k); b > 0; k = next(k))
    {
        s += k * (b / 10);
        b /= 10;
    }
}
