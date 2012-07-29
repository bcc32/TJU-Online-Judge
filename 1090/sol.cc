#include <iostream>
#include <vector>
#include <map>
#include <deque>
using namespace std;

vector< vector<bool> > v;

int fill(int, int);

int main(void)
{
    map<int, int> f;
    int n, m;
    cin >> n >> m;
    v.resize(n);
    for (int i = 0; i < n; i++)
        v[i].resize(m);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (string::iterator it = s.begin(); it < s.end(); ++it)
        {
            if (*it == '1')
                v[i][it - s.begin()] = false;
            else
                v[i][it - s.begin()] = true;
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (v[i][j])
            {
                int x = fill(i, j);
                if (f.find(x) != f.end())
                    f[x]++;
                else
                    f[x] = 1;
            }
    for (int i = 1; i <= n; i++)
        if (f.find(i) != f.end())
            cout << i << " " << f[i] << endl;
}

int fill(int a, int b)
{
    int c = 1;
    v[a][b] = false;
    int i = a;
    while (--i >= 0 && v[i][b])
    {
        v[i][b] = false;
        c++;
    }
    i = a;
    while (++i < v.size() && v[i][b])
    {
        v[i][b] = false;
        c++;
    }
    return c;
}
