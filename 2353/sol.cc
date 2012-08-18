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
        for (int foo = 1; foo <= 1000000; foo++)
        {
            bool done = true;
            set<int> bar;
            for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
                if (bar.find(*it % foo) == bar.end())
                    bar.insert(*it % foo);
                else
                {
                    done = false;
                    break;
                }
            if (done)
            {
                cout << foo << endl;
                break;
            }
        }
    }
}
