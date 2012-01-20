#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long a, b, c, k;
        cin >> a >> b >> c >> k;
        long long x = a, d = b - a, r = b / a;
        if (c - b == b - a)
            for (int i = 1; i < k; i++)
            {
                x += d;
                x %= 200907;
            }
        else if (c * a == b * b)
            for (int i = 1; i < k; i++)
            {
                x *= r;
                x %= 200907;
            }
        cout << x << endl;
    }
}
