#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    int n = a + b;
    int d;
    cin >> d;
    int c = 0;
    while (n >= d)
    {
        c += n / d;
        n = n % d + n / d;
    }
    cout << c << endl;
}
