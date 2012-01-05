#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    int m, n;
    cin >> m >> n;
    map<string, int> v;
    for (int i = 0; i < m; i++)
    {
        string s;
        int val;
        cin >> s >> val;
        v[s] = val;
    }
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        string s;
        for (cin >> s; s != "."; cin >> s)
            c += v[s];
        cout << c << endl;
    }
}
