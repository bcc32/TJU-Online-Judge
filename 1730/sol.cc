#include <iostream>
#include <set>
using namespace std;

int d(int n);

int main(void)
{
    set<int> non_self;
    for (int i = 1; i < 10000; i++)
        non_self.insert(d(i));
    for (int i = 1; i < 10000; i++)
        if (non_self.find(i) == non_self.end())
            cout << i << endl;
}

int d(int n)
{
    int f = n;
    while (f > 0)
    {
        n += f % 10;
        f /= 10;
    }
    return n;
}
