#include <iostream>
#include <vector>
#include <deque>
#include <map>
using namespace std;

map< int, vector<int> > t;

void make_link(int, int);
bool find_path(int, int);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        t.clear();
        int m;
        cin >> m;
        for (int j = 1; j < m; j++)
        {
            int a, b;
            cin >> a >> b;
            make_link(a, b);
        }
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int a, b;
            cin >> a >> b;
            cout << (find_path(a, b) ? "Yes" : "No") << endl;
        }
    }
}

void make_link(int a, int b) // a is the child of b
{
    if (t.find(b) == t.end())
        t[b] = vector<int>();
    t[b].push_back(a);
}

bool find_path(int a, int b) // is b the child of a?
{
    deque<int> open_list;
    open_list.push_back(a);
    map<int, int> dist;
    dist[a] = 0;
    while (open_list.size() > 0)
    {
        int curr = open_list.front();
        open_list.pop_front();
        for (int i = 0; i < t[curr].size(); i++)
            if (dist.find(t[curr][i]) == dist.end())
            {
                dist[t[curr][i]] = dist[curr] + 1;
                open_list.push_back(t[curr][i]);
            }
        if (dist.find(b) != dist.end() && dist[b] > 0)
            return true;
    }
    return false;
}
