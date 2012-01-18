#include <iostream>
#include <set>
using namespace std;

bool cmp(string a, string b);

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        set<string> s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == 'B')
            {
                string x;
                cin >> x;
                s.insert(x);
            }
            else if (c == 'G')
            {
                set<string>::iterator it = s.begin();
                cout << *it << endl;
                s.erase(it);
            }
        }
    }
}

bool cmp(string a, string b)
{
    return a.size() < b.size() || (a.size() <= b.size() && a < b);
}
