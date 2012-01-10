#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        set<int> x, y, c;
        for (int j = 0; j < a; j++)
        {
            int z;
            cin >> z;
            x.insert(z);
        }
        for (int j = 0; j < b; j++)
        {
            int z;
            cin >> z;
            y.insert(z);
        }
        for (set<int>::iterator it = x.begin(); it != x.end(); it++)
            if (y.find(*it) != y.end())
                c.insert(*it);
        for (set<int>::iterator it = c.begin(); it != c.end(); it++)
            if (it == c.begin())
                cout << *it;
            else
                cout << " " << *it;
        cout << endl;
    }
}
