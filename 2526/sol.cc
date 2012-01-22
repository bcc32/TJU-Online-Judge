#include <iostream>
using namespace std;

int pow(int b, int e);

int main(void)
{
    int b, n;
    for (cin >> b >> n; b != 0 || n != 0; cin >> b >> n)
    {
        int a;
        for (a = 1; pow(a, n) <= b; a++);
        if (pow(a - 1, n) == b || b - pow(a - 1, n) < pow(a, n) - b)
            cout << a - 1 << endl;
        else
            cout << a << endl;
    }
}

int pow(int b, int e)
{
    int p = 1;
    for (int i = 0; i < e; i++)
        p *= b;
    return p;
}
