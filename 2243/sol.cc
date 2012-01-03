#include <iostream>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int c;
        for (c = 1; n != 1; c++)
            if (n % 2 == 0)
                n /= 2;
            else
                n = 3 * n + 1;
        cout << c << endl;
    }
}
