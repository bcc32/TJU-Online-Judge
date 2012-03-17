#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        map<char, int> m;
        string s;
        cin >> s;
        int max = 0;
        for (string::iterator it = s.begin(); it < s.end(); ++it)
            m[*it]++;
        for (char c = 'a'; c <= 'z'; c++)
            if (m[c] > max)
                max = m[c];
        for (char c = 'a'; c <= 'z'; c++)
            if (m[c] == max)
                cout << c;
        cout << endl;
    }
}
