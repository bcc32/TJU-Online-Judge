#include <iostream>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int a = 1, b = 1;
        for (int i = 1; i < n; i++)
        {
            int t = a + b;
            a = b;
            b = t;
        }
        cout << b << endl;
    }
}
