#include <iostream>
#include <vector>
#define max(a, b) ((a) > (b) ? (a) : (b))
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector< vector<int> > v(n);
    for (int i = 1; i <= n; i++)
    {
        vector<int> _v(i);
        for (int j = 0; j < i; j++)
            cin >> _v[j];
        v[i - 1] = _v;
    }
    for (int i = v.size() - 2; i >= 0; i--)
        for (int j = 0; j < v[i].size(); j++)
            v[i][j] += max(v[i + 1][j], v[i + 1][j + 1]);
    cout << v[0][0] << endl;
}
