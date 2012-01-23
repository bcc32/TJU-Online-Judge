#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c = 0;
        cin >> a >> b;
        if (a > b)
        {
            a ^= b;
            b ^= a;
            a ^= b;
        }
        for (int j = 1; j * j <= a; j++)
        {
            if (a % j == 0)
            {
                if (b % j == 0) c++;
                if (b % (a / j) == 0) c++;
            }
        }
        cout << c << endl;
    }
}
