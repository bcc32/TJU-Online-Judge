#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> u(m), v(m);
        for (int j = 0; j < m; j++)
            cin >> u[j];
        for (int j = 0; j < m; j++)
            cin >> v[j];
        long long s = 0;
        for (int j = 0; j < m; j++)
            s += u[j] * v[j];
        cout << s << endl;
    }
}
