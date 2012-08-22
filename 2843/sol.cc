#include <iostream>
#include <vector>
#define max(a, b) ((a) > (b) ? (a) : (b))
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector< vector<int> > v(m), u(m);
        for (int j = 0; j < m; j++)
        {
            v[j].resize(3);
            cin >> v[j][0] >> v[j][1] >> v[j][2];
        }
        u[0].resize(3);
        u[0][0] = v[0][0];
        u[0][1] = v[0][1];
        u[0][2] = v[0][2];
        for (int j = 1; j < m; j++)
        {
            u[j].resize(3);
            u[j][0] = v[j][0] + max(u[j - 1][1], u[j - 1][2]);
            u[j][1] = v[j][1] + max(u[j - 1][0], u[j - 1][2]);
            u[j][2] = v[j][2] + max(u[j - 1][0], u[j - 1][1]);
        }
        cout << max(max(u[m - 1][0], u[m - 1][1]), u[m - 1][2]) << endl;
    }
}
