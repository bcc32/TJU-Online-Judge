#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> v(m);
        for (int j = 0; j < m; j++)
            cin >> v[j];
        sort(v.begin(), v.end());
        int max = 0;
        for (int j = 0; j < m; j++)
            if ((v.size() - j) * v[j] > max)
                max = (v.size() - j) * v[j];
        cout << max << endl;
    }
}
