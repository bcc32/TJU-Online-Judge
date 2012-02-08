#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << max_element(v.begin() + a - 1, v.begin() + b) -
            min_element(v.begin() + a - 1, v.begin() + b) << endl;
    }
}
