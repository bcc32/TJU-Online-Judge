#include <iostream>
#include <set>
using namespace std;

int sum(set<int> s);

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        set<int> s;
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                for (int j = 1; i * j < n; j++)
                    s.insert(i * j);
        cout << sum(s) << endl;
    }
}

int sum(set<int> s)
{
    int x = 0;
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
    {
        x += *it;
        x %= 1000000007;
    }
    return x;
}
