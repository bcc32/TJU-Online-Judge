#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <utility>
using namespace std;

vector< vector<char> > v;
int m, n;

int find(int, int);

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        v.clear();
        int x, y;
        cin >> m >> n;
        v.resize(m);
        for (int j = 0; j < m; j++)
        {
            v[j].resize(n);
            for (int k = 0; k < n; k++)
            {
                char ch;
                cin >> ch;
                if (ch == 'S')
                {
                    x = j;
                    y = k;
                }
                v[j][k] = ch;
            }
        }
        cout << find(x, y) << endl;
    }
}

int find(int x, int y)
{
    map< pair<int, int>, pair<int, int> > dist;
    queue< pair<int, int> > open_list;
    dist[make_pair(x, y)] = make_pair(0, 1);
    open_list.push(make_pair(x, y));
    while (open_list.size() > 0)
    {
        pair<int, int> curr = open_list.front();
        open_list.pop();
        if (v[curr.first][curr.second] == 'T')
            return dist[curr].first;
        pair<int, int> p = dist[curr];
        pair<int, int> next;
        switch (p.second)
        {
        case 0:
            if (curr.second < n - 1 && v[curr.first][curr.second + 1] != '#')
                next = make_pair(curr.first, curr.second + 1);
            break;
        case 1:
            if (curr.first > 0 && v[curr.first - 1][curr.second] != '#')
                next = make_pair(curr.first - 1, curr.second);
            break;
        case 2:
            if (curr.second > 0 && v[curr.first][curr.second - 1] != '#')
                next = make_pair(curr.first, curr.second - 1);
            break;
        case 3:
            if (curr.first < n - 1 && v[curr.first + 1][curr.second] != '#')
                next = make_pair(curr.first + 1, curr.second);
            break;
        }
        if (dist.find(next) == dist.end() || p.first + 1 < dist[next].first)
        {
            open_list.push(next);
            dist[next] = make_pair(p.first + 1, p.second);
        }
        switch (p.second)
        {
        case 3:
            if (curr.second < n - 1 && v[curr.first][curr.second + 1] != '#')
                next = make_pair(curr.first, curr.second + 1);
            break;
        case 0:
            if (curr.first > 0 && v[curr.first - 1][curr.second] != '#')
                next = make_pair(curr.first - 1, curr.second);
            break;
        case 1:
            if (curr.second > 0 && v[curr.first][curr.second - 1] != '#')
                next = make_pair(curr.first, curr.second - 1);
            break;
        case 2:
            if (curr.first < n - 1 && v[curr.first + 1][curr.second] != '#')
                next = make_pair(curr.first + 1, curr.second);
            break;
        }
        if (dist.find(next) == dist.end() || p.first + 2 < dist[next].first)
        {
            open_list.push(next);
            dist[next] = make_pair(p.first + 2, (p.second + 1) % 4);
        }
        switch (p.second)
        {
        case 1:
            if (curr.second < n - 1 && v[curr.first][curr.second + 1] != '#')
                next = make_pair(curr.first, curr.second + 1);
            break;
        case 2:
            if (curr.first > 0 && v[curr.first - 1][curr.second] != '#')
                next = make_pair(curr.first - 1, curr.second);
            break;
        case 3:
            if (curr.second > 0 && v[curr.first][curr.second - 1] != '#')
                next = make_pair(curr.first, curr.second - 1);
            break;
        case 0:
            if (curr.first < n - 1 && v[curr.first + 1][curr.second] != '#')
                next = make_pair(curr.first + 1, curr.second);
            break;
        }
        if (dist.find(next) == dist.end() || p.first + 2 < dist[next].first)
        {
            open_list.push(next);
            dist[next] = make_pair(p.first + 2, (p.second + 3) % 4);
        }
    }
    return -1;
}
