#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, a = 1, b = 1;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int t = a + b;
            a = b;
            b = t;
        }
        cout << a << " " << b << endl;
    }
}
