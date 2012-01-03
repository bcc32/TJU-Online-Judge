#include <iostream>
#include <algorithm>
using namespace std;

bool subseq(string t, string s);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, t;
        cin >> t >> s;
        string r = s;
        reverse(r.begin(), r.end());
        if (subseq(t, s) || subseq(t, r))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

bool subseq(string t, string s)
{
    int j = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (j >= s.size())
            break;
        if (s[j] == t[i])
            j++;
    }
    if (j < s.size()) return false;
    else return true;
}
