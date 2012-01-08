#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        map<int, int> m;
        int t;
        cin >> t;
        for (int j = 0; j < t; j++)
        {
            int x;
            cin >> x;
            if (m.find(x) == m.end())
                m[x] = 1;
            else
                m[x]++;
        }
        int max = 1;
        for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
            if (it->second > max)
                max = it -> second;
        cout << max << endl;
    }
}
