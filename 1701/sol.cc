#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return b < a; // reverse sort
}

int sum(vector<int>::iterator a, vector<int>::iterator b)
{
    int s = 0;
    for (vector<int>::iterator it = a; it <= b; it++)
        s += *it;
    return s;
}

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Scenario #" << i + 1 << ":" << endl;
        bool poss = false;
        int s, m;
        cin >> s >> m;
        vector<int> v(m);
        for (int j = 0; j < m; j++)
            cin >> v.at(j);
        sort(v.begin(), v.end(), cmp);
        for (int j = 0; j < v.size(); j++)
            if (sum(v.begin(), v.begin() + j) >= s)
            {
                cout << j + 1;
                poss = true;
                break;
            }
        if (!poss)
            cout << "impossible";
        cout << endl << endl;
    }
}
