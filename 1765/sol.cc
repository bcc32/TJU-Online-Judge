#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n), u(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    u[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int m = -1, M = -1;
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i] && (m < 0 || u[j] > u[m]))
                m = j;
            if (u[j] > u[M])
                M = j;
        }
        if (m >= 0)
            u[i] = u[m] + 1;
        else
            u[i] = u[M];
    }
    cout << u[n - 1] << endl;
}
