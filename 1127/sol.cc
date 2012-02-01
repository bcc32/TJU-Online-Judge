#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sortedness(string s)
{
    int c = 0;
    for (int i = 0; i < s.size(); i++)
        for (int j = i + 1; j < s.size(); j++)
            if (s[i] > s[j])
                c++;
    return c;
}

bool cmp(string a, string b)
{
    return sortedness(a) < sortedness(b);
}

int main(void)
{
    int n, m;
    string s;
    vector<string> v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    stable_sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}
