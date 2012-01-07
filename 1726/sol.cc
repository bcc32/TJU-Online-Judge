#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Scenario #" << i + 1 << ":" << endl;
        int x, a = 1, b = 1;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            int t = a + b;
            a = b;
            b = t;
        }
        cout << b << endl << endl;
    }
}
