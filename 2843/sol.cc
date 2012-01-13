#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b);
int find(vector< vector<int> >::iterator u, vector< vector<int> >::iterator v,
    int i); // i: last used index

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector< vector<int> > v(m);
        for (int j = 0; j < m; j++)
        {
            v[j].resize(3);
            cin >> v[j][0] >> v[j][1] >> v[j][2];
        }
        cout << find(v.begin(), v.end(), -1) << endl;
    }
}

int max(int a, int b) // macro doesn't work because it repeats the calculation
{
    if (a > b) return a;
    else return b;
}

int find(vector< vector<int> >::iterator u, vector< vector<int> >::iterator v,
    int i)
{
    if (u == v)
        return 0;
    else
    {
        if (i == 0)
            return max((*u)[1] + find(u + 1, v, 1),
                (*u)[2] + find(u + 1, v, 2));
        else if (i == 1)
            return max((*u)[0] + find(u + 1, v, 0),
                (*u)[2] + find(u + 1, v, 2));
        else if (i == 2)
            return max((*u)[0] + find(u + 1, v, 0),
                (*u)[1] + find(u + 1, v, 1));
        else
            return max(max((*u)[0] + find(u + 1, v, 0), (*u)[1] +
                find(u + 1, v, 1)), (*u)[2] + find(u + 1, v, 2));
    }
}
