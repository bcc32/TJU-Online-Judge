#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b);

int main(void)
{
    int n;
    for (cin >> n; n != -1; cin >> n)
    {
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            string s;
            cin >> a >> b >> c >> s;
            m[s] = a * b * c;
        }
        map<string, int>::iterator max = max_element(m.begin(), m.end(), cmp),
            min = min_element(m.begin(), m.end(), cmp);
        cout << max->first << " took clay from " << min->first << "." << endl;
    }
}

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}
