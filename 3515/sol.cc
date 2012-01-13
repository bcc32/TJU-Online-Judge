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
        vector<int> v(m);
        for (int j = 0; j < m; j++)
            cin >> v[j];
        sort(v.begin(), v.end());
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            string s;
            cin >> s;
            if (s == "add")
            {
                int x;
                cin >> x;
                v.push_back(x);
                sort(v.begin(), v.end());
            }
            else if (s == "mid")
                if (v.size() % 2 == 0)
                    cout << v[v.size() / 2 - 1] << endl;
                else
                    cout << v[v.size() / 2] << endl;
        }
    }
}
