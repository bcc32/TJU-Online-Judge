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
        cout << x * x - x + 1 << " " << x * x + x - 1 << endl;
    }
}
