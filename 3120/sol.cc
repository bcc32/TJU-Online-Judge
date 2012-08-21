#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; !cin.eof(); cin >> n)
    {
        vector<int> v(n), u(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int max = 1;
        u[0] = 1;
        for (int i = 1; i < n; i++)
        {
            int m = -1;
            for (int j = 0; j < i; j++)
                if (v[i] > v[j] && u[j] > u[m])
                    m = j;
            if (m >= 0)
                u[i] = u[m] + 1;
            else
                u[i] = 1;
            if (u[i] > max)
                max = u[i];
        }
        cout << max << endl;
    }
}
