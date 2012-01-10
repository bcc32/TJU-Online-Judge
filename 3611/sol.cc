#include <iostream>
using namespace std;

bool coprime(int a, int b);

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int s = 0;
        for (int i = 2; i < n; i++)
            if (!coprime(i, n))
            {
                s += i;
                s %= 1000000007;
            }
        cout << s << endl;
    }
}

bool coprime(int a, int b) // a < b
{
    for (int i = 2; i <= a; i++)
        if (a % i == 0 && b % i == 0)
            return false;
    return true;
}
