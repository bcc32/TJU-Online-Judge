#include <iostream>
#include <vector>
using namespace std;

bool substrq(string f, string b);
bool prefixq(string f, string b);

int main(void)
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        bool f = false;
        for (int j = 0; j < v.size(); j++)
            if (substrq(v[j], s))
            {
                f = true;
                break;
            }
        if (!f)
            cout << "Just an ordinary person" << endl;
        else
            cout << "A new hero discovered" << endl;
    }
}

bool substrq(string f, string b)
{
    if (f.size() > b.size())
        return false;
    if (prefixq(f, b))
        return true;
    return substrq(f, b.substr(1));
}

bool prefixq(string f, string b)
{
    if (f.size() > b.size())
        return false;
    for (int i = 0; i < f.size(); i++)
        if (f[i] != b[i])
            return false;
    return true;
}
