#include <iostream>
#include <vector>
using namespace std;

void next(vector<int> &v);

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
        while (v.size() > 1)
            next(v);
        cout << v[0] << endl;
    }
}

void next(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
        v[i] = v[i + 1] - v[i];
    v.pop_back();
}