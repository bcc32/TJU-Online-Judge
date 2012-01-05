#include <iostream>
#include <set>
using namespace std;

int abs(int x);

int main(void)
{
    int n;
    for (cin >> n; !cin.eof(); cin >> n)
    {
        set<int> s;
        int x;
        cin >> x;
        for (int i = 1; i < n; i++)
        {
            int t = x;
            cin >> x;
            s.insert(abs(x - t));
        }
        bool jolly = true;
        for (int i = 1; i < n; i++)
            if (s.find(i) == s.end())
            {
                jolly = false;
                break;
            }
        cout << (jolly ? "Jolly" : "Not jolly") << endl;
    }
}

int abs(int x)
{
    return x >= 0 ? x : -x;
}
