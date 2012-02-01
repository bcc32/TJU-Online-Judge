#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> ld(vector<string> v)
{
    vector<string> f;
    for (vector<string>::iterator it = v.begin(); it < v.end(); it++)
        f.push_back(it->substr(1));
    return f;
}

bool test(vector<string> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].size() == 0)
            return true;
        else if (count(v.begin(), v.end(), v[i]) > 1)
            return true;
    }
    return false;
}

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int c;
        for (c = 0; !test(v); c++)
            v = ld(v);
        cout << c - 1 << endl;
    }
}
