#include <iostream>
using namespace std;

int fac(int n);

int main(void)
{
    cout.setf(ios::fixed);
    cout.precision(9);
    cout << "n e" << endl;
    cout << "- -----------" << endl;
    cout << "0 1" << endl;
    cout << "1 2" << endl;
    cout << "2 2.5" << endl;
    for (int n = 3; n < 10; n++)
    {
        double s = 0.0;
        for (int i = 0; i <= n; i++)
            s += 1.0 / fac(i);
        cout << n << " " << s << endl;
    }
}

int fac(int n)
{
    int p = 1;
    for (int i = 2; i <= n; i++)
        p *= i;
    return p;
}
