#include <iostream>
#include <string>
#include <map>
#define abs(x) ((x) > 0 ? (x) : -(x))
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    cin.get(); // flush
    for (int i = 0; i < n; i++)
    {
        string a, b;
        getline(cin, a);
        getline(cin, b);
        map<char, int> m, M;
        for (string::iterator it = a.begin(); it < a.end(); ++it)
            if (m.find(*it) == m.end())
                m[*it] = 1;
            else m[*it]++;
        for (string::iterator it = b.begin(); it < b.end(); ++it)
            if (M.find(*it) == M.end())
                M[*it] = 1;
            else M[*it]++;
        int x = 0;
        for (char c = 'a'; c <= 'z'; c++)
            x += abs(m[c] - M[c]);
        cout << "Case #" << i + 1 << ":  " << x << endl;
    }
}
