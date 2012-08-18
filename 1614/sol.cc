#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

map<int, int> e;
map< int, vector<int> > m;
void edge(int, int);
bool test(int);

int main(void)
{
    int a, b, k = 0;
    for (cin >> a >> b; a >= 0 || b >= 0; cin >> a >> b)
    {
        k++;
        e.clear();
        m.clear();
        edge(a, b);
        for (cin >> a >> b; a != 0 || b != 0; cin >> a >> b)
            edge(a, b);
        int c = 0, r = 0;
        for (map< int, int >::iterator it = e.begin();
            it != e.end(); ++it)
            if (it->second == 0)
            {
                c++;
                r = it->first;
            }
        if (c != 1)
            cout << "Case " << k << " is not a tree." << endl;
        else if (test(r))
            cout << "Case " << k << " is a tree." << endl;
        else
            cout << "Case " << k << " is not a tree." << endl;
    }
}

void edge(int a, int b)
{
    if (e.find(a) == e.end())
        e[a] = 0;
    if (e.find(b) == e.end())
        e[b] = 1;
    else
        e[b]++;
    m[a].push_back(b);
}

bool test(int r)
{
    queue<int> open_list;
    map<int, int> dist;
    open_list.push(r);
    dist[r] = 0;
    while (open_list.size() > 0)
    {
        int curr = open_list.front();
        open_list.pop();
        vector<int> v = m[curr];
        for (vector<int>::iterator it = v.begin(); it < v.end(); ++it)
            if (dist.find(*it) != dist.end())
                return false;
            else
            {
                dist[*it] = dist[curr] + 1;
                open_list.push(*it);
            }
    }
    return true;
}
