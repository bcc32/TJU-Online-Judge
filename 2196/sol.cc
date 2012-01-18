#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == 'B')
            {
                int x;
                cin >> x;
                s.insert(x);
            }
            else if (c == 'G')
            {
                set<int>::iterator it = s.begin();
                cout << *it << endl;
                s.erase(it);
            }
        }
    }
}
