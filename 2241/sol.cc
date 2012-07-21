#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector< vector<int> > v;

void add_ancestors(int, int);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        v.clear();
        int m;
        cin >> m;
        v.resize(m);
        for (int j = 1; j < m; j++)
        {
            int a, b;
            cin >> a >> b;
            add_ancestors(a, b);
        }
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int a, b;
            cin >> a >> b;
            if (find(v[b].begin(), v[b].end(), a) != v[b].end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}

void add_ancestors(int a, int b)
{
    v[a].push_back(b);
    if (b > 0)
        for (int i = 0; i < v[b].size(); i++)
            add_ancestors(a, v[b][i]);
}
