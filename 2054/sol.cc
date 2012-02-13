#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair< pair<int, int>, pair<int, int> > a, pair< pair<int, int>, 
    pair<int, int> > b);

int main(void)
{
    int dollars, cents, a, b, c, d;
    char foo;
    for (cin >> dollars >> foo >> cents >> a >> b >> c >> d; !cin.eof();
        cin >> dollars >> foo >> cents >> a >> b >> c >> d)
    {
        int n = 100 * dollars + cents;
        vector< pair< pair<int, int>, pair<int, int> > > v;
        for (int x = 0; x <= a; x++)
        {
            if (25 * x > n) break;
            for (int y = 0; y <= b; y++)
            {
                if (25 * x + 10 * y > n) break;
                for (int z = 0; z <= c; z++)
                {
                    if (25 * x + 10 * y + 5 * z > n) break;
                    for (int w = 0; w <= d; w++)
                    {
                        if (25 * x + 10 * y + 5 * z + w > n) break;
                        else if (25 * x + 10 * y + 5 * z + w == n)
                            v.push_back(make_pair(make_pair(x, y),
                                make_pair(z, w)));
                    }
                }
            }
        }
        if (v.size() > 0)
        {
            pair< pair<int, int>, pair<int, int> > p =
                *min_element(v.begin(), v.end(), cmp);
            cout << p.first.first << " " << p.first.second << " " << 
                p.second.first << " " << p.second.second << endl;
        }
        else
            cout << "NO EXACT CHANGE" << endl;
    }
}

bool cmp(pair< pair<int, int>, pair<int, int> > a, pair< pair<int, int>, 
    pair<int, int> > b)
{
    return a.first.first + a.first.second + a.second.first + a.second.second < 
        b.first.first + b.first.second + b.second.first + b.second.second;
}
