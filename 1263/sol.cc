#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool test(string f, string b);
bool ssq(string f, string b);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<string> v(m);
        for (int j = 0; j < m; j++)
            cin >> v[j];
        int max = 0;
        for (int j = 0; j < v[0].size(); j++)
            for (int k = max; j + k <= v[0].size(); k++)
            {
                bool f = true;
                for (int l = 0; l < m; l++)
                    if (!test(v[0].substr(j, k), v[l]))
                    {
                        f = false;
                        break;
                    }
                if (f)
                    max = k;
            }
        cout << max << endl;
    }
}

bool test(string f, string b)
{
    if (ssq(f, b))
        return true;
    reverse(f.begin(), f.end());
    return ssq(f, b);
}

bool ssq(string f, string b)
{
    if (f.size() > b.size())
        return false;
    for (int i = 0; i + f.size() <= b.size(); i++)
        if (f == b.substr(i, f.size()))
            return true;
    return false;
}
