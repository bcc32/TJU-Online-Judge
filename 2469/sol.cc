#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

vector< pair< vector<int>, bool > > v;

bool pred(pair< vector<int>, bool >);
void make_link(int, int);
void mark_flood(int);

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        v.resize(n);
        for (int j = 0; j < n; j++)
        {
            v[j].first.clear();
            v[j].second = false;
        }
        for (int j = 0; j < m; j++)
        {
            int a, b;
            cin >> a >> b;
            make_link(a - 1, b - 1);
        }
        int rooms;
        for (rooms = 0; count_if(v.begin(), v.end(), pred) > 0; rooms++)
            mark_flood(find_if(v.begin(), v.end(), pred) - v.begin());
        cout << rooms << endl;
    }
}

bool pred(pair< vector<int>, bool > p)
{
    return !p.second;
}

void make_link(int a, int b)
{
    v[a].first.push_back(b);
    v[b].first.push_back(a);
}

void mark_flood(int a)
{
    queue<int> open_list;
    open_list.push(a);
    v[a].second = true;
    while (open_list.size() > 0)
    {
        int curr = open_list.front();
        open_list.pop();
        for (int i = 0; i < v[curr].first.size(); i++)
            if (!v[v[curr].first[i]].second)
            {
                v[v[curr].first[i]].second = true;
                open_list.push(v[curr].first[i]);
            }
    }
}
