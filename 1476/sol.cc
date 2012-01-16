#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, p;
        cin >> x;
        for (p = 0; x % 2 == 0; p++)
            x /= 2;
        cout << x << " " << p << endl;
    }
}
