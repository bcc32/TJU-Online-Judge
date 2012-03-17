#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        set<int> s;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            string str;
            cin >> str;
            if (str == "add")
            {
                int x;
                cin >> x;
                s.insert(x);
            }
            else if (str == "mid")
            {
                set<int>::iterator it = s.begin();
                int n = s.size() % 2 == 0 ? s.size() / 2 - 1 : s.size() / 2;
                for (int i = 0; i < n; i++) ++it;
                cout << *it << endl;
            }
        }
    }
}
