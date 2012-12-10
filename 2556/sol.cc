#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

vector< pair<int, int> > pos;

int a, b;

int loop(pair<int, int>);
bool exit(pair<int, int>);

int main(void)
{
    int c;
    for (cin >> a >> b >> c; a != 0 || b != 0 || c != 0; cin >> a >> b >> c)
    {
        pos.clear();
        vector< vector<char> > v(a);
        for (int i = 0; i < a; i++)
        {
            v[i].resize(b);
            for (int j = 0; j < b; j++)
                scanf(" %c", &v[i][j]);
        }
        pair<int, int> curr = make_pair(0, c - 1);
        int s = 0;
        do
        {
            pos.push_back(curr);
            switch(v[curr.first][curr.second])
            {
            case 'N':
                curr.first--;
                break;
            case 'E':
                curr.second++;
                break;
            case 'S':
                curr.first++;
                break;
            case 'W':
                curr.second--;
                break;
            default:
                cerr << "wat." << endl;
                return 1;
                break;
            }
            s++;
        } while (!loop(curr) && !exit(curr));
        if (loop(curr))
            printf("%d step(s) before a loop of %d step(s)\n", s - loop(curr),
                loop(curr));
        else if (exit(curr))
            printf("%d step(s) to exit\n", s);
        else
        {
            cerr << "wat." << endl;
            return 1;
        }
    }
}

int loop(pair<int, int> p)
{
    return pos.end() - find(pos.begin(), pos.end(), p); // 0 if not found
}

bool exit(pair<int, int> p)
{
    return p.first < 0 || p.first >= b || p.second < 0 || p.second >= b;
}
