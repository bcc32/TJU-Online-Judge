#include <iostream>
#include <vector>
#include <algorithm>
#define abs(x) ((x) > 0 ? (x) : -(x))
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
            if (a < b)
                a += v[i];
            else
                b += v[i];
        cout << abs(a - b) << endl;
    }
}
