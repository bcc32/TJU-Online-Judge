#include <iostream>
#include <vector>
using namespace std;

int max(vector<int> v, int i);

int main(void)
{
    int n;
    for (cin >> n; !cin.eof(); cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int m = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int x = max(v, i);
            if (x > m)
                m = x;
        }
        cout << m << endl;
    }
}

int max(vector<int> v, int i)
{
    if (i = v.size() - 1) return v[i];
    int s = 0;
    for (int j = i + 1; j < v.size(); j++)
    {
        if (v[j] <= v[i]) continue;
        int m = max(v, j);
        if (m > s)
            s = m;
    }
    return s;
}
