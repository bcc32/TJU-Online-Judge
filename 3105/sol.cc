#include <iostream>
#include <vector>
using namespace std;

bool primeq(int n);

int main(void)
{
    vector<int> p;
    for (int i = 2; i < 100000; i++)
        if (primeq(i))
            p.push_back(i);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        cout << p[m - 1] << endl;
    }
}

bool primeq(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

