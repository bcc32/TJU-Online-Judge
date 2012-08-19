#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

vector< vector<int> > v;

void link(int, int);
int find(int, int);

int main(void)
{
    int t = 0;
    while (!cin.eof())
    {
        t++;
        v.clear();
        v.resize(20);
        for (int i = 1; i < 20; i++)
        {
            int n;
            cin >> n;
            for (int j = 0; j < n; j++)
            {
                int x;
                cin >> x;
                link(i - 1, x - 1);
            }
        }
        if (cin.eof())
            break;
        cout << "Test Set #" << t << endl;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            cout << a << " to " << b << ": " << find(a - 1, b - 1) << endl;
        }
        cout << endl;
    }
}

void link(int a, int b)
{
    v[a].push_back(b);
    v[b].push_back(a);
}

int find(int a, int b)
{
    queue<int> open_list;
    map<int, int> dist;
    open_list.push(a);
    dist[a] = 0;
    while (open_list.size() > 0)
    {
        if (dist.find(b) != dist.end())
            return dist[b];
        int curr = open_list.front();
        open_list.pop();
        for (vector<int>::iterator it = v[curr].begin();
            it < v[curr].end(); ++it)
            if (dist.find(*it) == dist.end())
            {
                dist[*it] = dist[curr] + 1;
                open_list.push(*it);
            }
    }
    return -1;
}
