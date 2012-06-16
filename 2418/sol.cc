#include <iostream>
#include <vector>
#include <utility>
#define abs(x) ((x) > 0 ? (x) : -(x))
#define MIN 10000000
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vector< pair< pair<int, int>, int > > v;
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < a; k++)
            {
                int x;
                cin >> x;
                if (x > 0)
                    v.push_back(make_pair(make_pair(j, k), x));
            }
        }
        int m = MIN;
        for (int j = 0; j < b; j++)
            for (int k = 0; k < a; k++)
            {
                // each corner is a pizza shop
                int c = 0;
                for (int t = 0; t < v.size(); t++)
                    c += (abs(j - v[t].first.first) +
                        abs(k - v[t].first.second)) * v[t].second;
                if (c < m)
                    m = c;
            }
        cout << m << " blocks" << endl;
    }
}
