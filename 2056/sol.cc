#include <iostream>
using namespace std;

int a, b, c;
int f(int x);

int main(void)
{
    for (cin >> a >> b >> c; !cin.eof(); cin >> a >> b >> c)
        cout << f(3) << " " << f(4) << " " << f(5) << endl;
}

int f(int x)
{
    return (a * (x - 1) * (x - 2) - 2 * b * x * (x - 2) + c * x * (x - 1)) / 2;
}
