#include <iostream>
#include <vector>
#define abs(x) ((x) > 0 ? (x) : -(x))
using namespace std;

vector< vector<int> > v;

int row(int);
int column(int);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.resize(b);
        for (int j = 0; j < b; j++)
        {
            v[j].resize(a);
            for (int k = 0; k < a; k++)
                cin >> v[j][k];
        }
        int mincol = column(0);
        for (int j = 1; j < a; j++)
        {
            int c = column(j);
            if (c < mincol)
                mincol = c;
        }
        int minrow = row(0);
        for (int j = 1; j < b; j++)
        {
            int r = row(j);
            if (r < minrow)
                minrow = r;
        }
        cout << minrow + mincol << " blocks" << endl;
    }
}

int row(int i)
{
    int s = 0;
    for (int j = 0; j < v.size(); j++)
        for (int k = 0; k < v[j].size(); k++)
            s += abs(j - i) * v[j][k];
    return s;
}

int column(int j)
{
    int s = 0;
    for (int i = 0; i < v.size(); i++)
        for (int k = 0; k < v[i].size(); k++)
            s += abs(k - j) * v[i][k];
    return s;
}
