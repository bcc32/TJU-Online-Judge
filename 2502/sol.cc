#include <iostream>
using namespace std;

int dsum(int n);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        bool f = false;
        int m;
        cin >> m;
        for (int i = 1; i <= m; i++)
            if (dsum(i) == m)
            {
                f = true;
                cout << i << endl;
                break;
            }
        if (!f)
            cout << 0 << endl;
    }
}

int dsum(int n)
{
    int s = n;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
