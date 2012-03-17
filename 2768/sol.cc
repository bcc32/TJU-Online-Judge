#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b);

int main(void)
{
    int c, n, m;
    cin >> c >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), cmp);
    for (vector<int>::iterator it = v.begin(); it < v.end(); ++it)
    {
        if (c == 0)
            break;
        if (c >= *it)
        {
            m += c / *it;
            c %= *it;
        }
    }
    cout << m << endl;
}

bool cmp(int a, int b)
{
    return a > b; // reverse
}
