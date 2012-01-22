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
        vector<string> v(m);
        for (int j = 0; j < m; j++)
            cin >> v[j];
        cout << "Case " << i + 1 << ": This list contains "
            << count(v.begin(), v.end(), "sheep") << " sheep." << endl;
        if (i < n - 1)
            cout << endl;
    }
}
