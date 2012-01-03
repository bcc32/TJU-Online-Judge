#include <iostream>
using namespace std;

int period(int n)
{
    /*
    int c = 1;
    for (int p = n * n % 2006; p != n % 2006; p = p * n % 2006) c++;
    return c;
    */
    return 464; // XXX discovered by experimentation...
}

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int x = n % 2006;
        int p = 1;
        int per = period(n);
        n %= per;
        for (int i = 0; i < n; i++)
        {
            p *= x;
            p %= 2006;
        }
        cout << p << endl;
    }
}
