#include <iostream>
using namespace std;

int main(void)
{
    int dollars, cents, a, b, c, d;
    char foo;
    for (cin >> dollars >> foo >> cents >> a >> b >> c >> d; !cin.eof();
        cin >> dollars >> foo >> cents >> a >> b >> c >> d)
    {
        int x = 100 * dollars + cents;
        int n = 0, Q = 0, D = 0, N = 0, P = 0;
        bool f = true;
        while (n < x)
        {
            if (a > 0 && n + 25 <= x)
            {
                n += 25;
                a--; Q++;
            }
            else if (b > 0 && n + 10 <= x)
            {
                n += 10;
                b--; D++;
            }
            else if (c > 0 && n + 5 <= x)
            {
                n += 5;
                c--; N++;
            }
            else if (d > 0)
            {
                n++;
                d--; P++;
            }
            else
            {
                cout << "NO EXACT CHANGE" << endl;
                f = false;
                break;
            }
        }
        if (f)
            cout << Q << " " << D << " " << N << " " << P << endl;
    }
}
