#include <iostream>
#include <vector>
#include <algorithm>
#define PERMUTATIONS 120
using namespace std;

int d(string a, string b);

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int m = n * 10;
        string x = "";
        string s = "ABCDE";
        for (int i = 0; i < PERMUTATIONS; i++,
            next_permutation(s.begin(), s.end()))
        {
            int c = 0;
            for (vector<string>::iterator it = v.begin(); it < v.end(); ++it)
                c += d(s, *it);
            if (c < m)
            {
                m = c;
                x = s;
            }
        }
        cout << x << " is the median ranking with value " << m << "." << endl;
    }
}

int d(string a, string b)
{
    int c = 0;
    for (int i = 0; i < a.size(); i++)
        for (int j = i + 1; j < a.size(); j++)
            if (b.find(a[i]) > b.find(a[j])) c++;
    return c;
}
