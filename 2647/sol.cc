#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int a, b;
bool pred(pair<int, int> p);
bool cmp(pair<int, int> a, pair<int, int> b);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        cin >> a >> b;
        vector< pair<int, int> > v(a);
        for (int j = 0; j < a; j++)
        {
            v[j].first = j;
            cin >> v[j].second;
        }
        while (find_if(v.begin(), v.end(), pred) != v.end())
        {
            if (max_element(v.begin(), v.end(), cmp) == v.begin())
            {
                t++;
                v.erase(v.begin());
            }
            else
            {
                v.push_back(v[0]);
                v.erase(v.begin());
            }
        }
        cout << t << endl;
    }
}

bool pred(pair<int, int> p)
{
    return p.first == b;
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
