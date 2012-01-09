#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        cout << i + 1 << " ";
        cout << m / 25 << " QUARTER(S), ";
        m %= 25;
        cout << m / 10 << " DIME(S), ";
        m %= 10;
        cout << m / 5 << " NICKEL(S), ";
        m %= 5;
        cout << m << " PENNY(S)" << endl;
    }
}
