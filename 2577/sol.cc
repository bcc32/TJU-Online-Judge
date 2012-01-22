#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int d = 10; x > d; d *= 10)
            if (x % d * 2 >= d)
                x = (x / d + 1) * d;
            else
                x -= x % d;
        cout << x << endl;
    }
}
