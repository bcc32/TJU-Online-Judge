#include <iostream>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                j++;
        }
        cout << "Mary won " << n - j << " times and John won " << j << " times"
            << endl;
    }
}
