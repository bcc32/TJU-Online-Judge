#include <iostream>
#include <vector>
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
        vector< vector<int> > v(b);
        for (int j = 0; j < b; j++)
        {
            v[j].resize(a);
            for (int k = 0; k < a; k++)
                cin >> v[j][k];
        }
        int m = MIN;
        for (int j = 0; j < b; j++)
            for (int k = 0; k < a; k++)
            {
                int c = 0;
                for (int _j = 0; _j < b; _j++)
                    for (int _k = 0; _k < a; _k++)
                        c += v[_j][_k] * (abs(_j - j) + abs(_k - k));
                if (c < m)
                    m = c;
            }
        cout << m << " blocks" << endl;
    }
}

bool cmp(pair< pair<int, int>, int > a, pair< pair<int, int>, int> b)
{
    return a.second < b.second;
}
