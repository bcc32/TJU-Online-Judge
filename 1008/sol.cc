#include <iostream>
#include <string>
#include <vector>
using namespace std;

string permute(string s, vector<int> key)
{
    string temp(s);
    for (int i = 0; i < key.size(); i++)
        temp[key[i] - 1] = s[i];
    return temp;
}

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<int> key(n);
        for (int i = 0; i < n; i++)
            cin >> key[i];
        int k;
        for (cin >> k; k != 0; cin >> k)
        {
            cin.ignore(1, ' ');
            string s;
            getline(cin, s);
            while (s.size() < n)
                s += ' ';
            // k %= n; // FIXME SOME OTHER REDUCTION
            for (int i = 0; i < k; i++)
                s = permute(s, key);
            cout << s << endl;
        }
        cout << endl;
    }
}
