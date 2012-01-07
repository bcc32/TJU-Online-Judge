#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector< set<int> > v;
        int n, m;
        cin >> n >> m;
        for (int j = 0; j < m; j++)
        {
            int a, b;
            cin >> a >> b;
            bool f = false;
            for (int k = 0; k < v.size(); k++)
                if (v[k].find(a) != v[k].end())
                {
                    v[k].insert(b);
                    f = true;
                    break;
                }
                else if (v[k].find(b) != v[k].end())
                {
                    v[k].insert(a);
                    f = true;
                    break;
                }
            if (!f)
            {
                v.push_back(set<int>());
                v.back().insert(a);
                v.back().insert(b);
            }
        }
        for (int j = 1; j <= n; j++)
        {
            bool f = false;
            for (int k = 0; k < v.size(); k++)
                if (v[k].find(j) != v[k].end())
                {
                    f = true;
                    break;
                }
            if (!f)
            {
                v.push_back(set<int>());
                v.back().insert(j);
            }
        }
        cout << v.size() << endl;
    }
}
