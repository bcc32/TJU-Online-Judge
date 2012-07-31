#include <iostream>
#include <utility>
#include <map>
using namespace std;

void addto(int, map< pair< pair<int, int>, int >, int > &, int, int, int);
int compute(int);

int main(void)
{
    map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (m.find(x) == m.end())
            m[x] = compute(x);
        cout << m[x] << endl;
    }
}

void addto(int n, map< pair< pair<int, int>, int >, int > &m, int a, int b, int c)
{
    if (m.find(make_pair(make_pair(a, b), c)) != m.end())
        m[make_pair(make_pair(a, b), c)] += n;
    else
        m[make_pair(make_pair(a, b), c)] = n;
}

int compute(int n)
{
    map< pair< pair<int, int>, int >, int > ways;
    ways[make_pair(make_pair(0, 0), 0)] = 1;
    for (int i = 0; i < n; i++)
    {
        map< pair< pair<int, int>, int >, int > temp;
        for (map< pair< pair<int, int>, int >, int >::iterator it = ways.begin();
            it != ways.end(); it++)
        {
            int a = it->first.first.first;
            int b = it->first.first.second;
            int c = it->first.second;
            int w = it->second;
            addto(w, temp, a + 1, b, c);
            addto(w, temp, a - 1, b, c);
            addto(w, temp, a, b + 1, c);
            addto(w, temp, a, b - 1, c);
            addto(w, temp, a, b, c + 1);
            addto(w, temp, a, b, c - 1);
        }
        ways = temp;
    }
    int c = 0;
    if (ways.find(make_pair(make_pair(0, 0), 0)) != ways.end())
        c += ways[make_pair(make_pair(0, 0), 0)];
    for (int i = 1; i <= n; i++)
    {
        if (ways.find(make_pair(make_pair(i, i), i)) != ways.end())
            c += ways[make_pair(make_pair(i, i), i)];
        if (ways.find(make_pair(make_pair(-i, -i), -i)) != ways.end())
            c += ways[make_pair(make_pair(-i, -i), -i)];
    }
    return c;
}
