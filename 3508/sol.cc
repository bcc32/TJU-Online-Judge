#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool rcmp(int a, int b);

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
        sort(u.begin(), u.end());
        sort(v.begin(), v.end(), rcmp);
        long long s = 0;
        for (int j = 0; j < m; j++)
            s += u[j] * v[j];
        cout << "Case #" << i + 1 << ": " << s << endl;
    }
}

bool rcmp(int a, int b)
{
    return a > b; // reverse
}
