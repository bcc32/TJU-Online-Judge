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
        set<int> s, d;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            s.insert(x);
            for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
                if (*it > x)
                    for (int i = 1; i * i <= *it - x; i++)
                    {
                        if ((*it - x) % i == 0)
                        {
                            d.insert(i);
                            d.insert((*it - x) / i);
                        }
                    }
                else if (*it < x)
                    for (int i = 1; i * i <= x - *it; i++)
                    {
                        if ((x - *it) % i == 0)
                        {
                            d.insert(i);
                            d.insert((x - *it) / i);
                        }
                    }
        }
        for (int foo = 1; foo <= 1000000; foo++)
            if (d.find(foo) == d.end())
            {
                cout << foo << endl;
                break;
            }
    }
}
