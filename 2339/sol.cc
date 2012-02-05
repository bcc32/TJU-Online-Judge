#include <iostream>
using namespace std;

int ndiv(int n);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << "Scenario #" << i + 1 << ":" << endl << (ndiv(x * x) + 1) / 2
            << endl << endl;
    }
}

int ndiv(int n)
{
    int i, c = 0;
    for (i = 1; i * i < n; i++)
        if (n % i == 0) c++;
    c *= 2;
    if (i * i == n) c++;
    return c;
}
