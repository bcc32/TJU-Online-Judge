#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, c = 0;
        cin >> x;
        for (int j = 2 * x; j > x; j--)
            if (j * x % (j - x) == 0) c++;
        cout << "Scenario #" << i + 1 << ":" << endl << c << endl << endl;
    }
}
