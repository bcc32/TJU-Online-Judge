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
        int m = -1;
        for (int j = 0; j < n; j++)
            if (v[j] < v[i] && (m < 0 || u[j] > u[m]))
                m = j;
        if (m >= 0)
            u[i] = u[m] + 1;
        else
            u[i] = u[i - 1];
    }
    cout << u[n - 1] << endl;
}
