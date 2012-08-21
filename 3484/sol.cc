#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++)
            cin >> v[j];
        int max = v[0];
        long long s = v[0];
        for (int j = 1; j < n; j++)
        {
            if (v[j] > max)
                max = v[j];
            s += v[j];
        }
        s -= max;
        cout << s << endl;
    }
}
