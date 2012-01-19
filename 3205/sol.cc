#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        vector<int> r(n);
        for (int j = 0; j < n; j++)
            cin >> r[j];
        sort(r.begin(), r.end());
        v[i] = r[n / 2];
    }
    sort(v.begin(), v.end());
    cout << v[n / 2] << endl;
}
