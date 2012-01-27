#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#define abs(x) ((x) > 0 ? (x) : -(x))
using namespace std;

bool cmp(pair< pair<int, int>, int > a, pair< pair<int, int>, int > b);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vector< vector<int> > v(b);
        for (int j = 0; j < b; j++)
        {
            v[j].resize(a);
            for (int k = 0; k < a; k++)
                cin >> v[j][k];
        }
        map< pair<int, int>, int > m;
        for (int j = 0; j < b; j++)
            for (int k = 0; k < a; k++)
                for (int _j = 0; _j < b; _j++)
                    for (int _k = 0; _k < a; _k++)
                        m[make_pair(j, k)] += v[_j][_k] *
                            (abs(_j - j) + abs(_k - k));
        cout << max_element(m.begin(), m.end(), cmp)->second << " blocks"
            << endl;
    }
}

bool cmp(pair< pair<int, int>, int > a, pair< pair<int, int>, int> b)
{
    return a.second < b.second;
}
