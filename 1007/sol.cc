#include <iostream>
#include <vector>
using namespace std;

bool test(int, int);

int main(void)
{
    int k;
    for (cin >> k; k != 0; cin >> k)
    {
        int m = 0;
        while (!test(k, ++m));
        cout << m << endl;
    }
}

bool test(int k, int m)
{
    vector<bool> v(k * 2);
    for (vector<bool>::iterator it = v.begin(); it < v.end(); ++it)
        *it = false;
    int n = -1;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < m; j++)
            while (v[++n % v.size()]);
        v[n % v.size()] = true;
        if (n % v.size() < k)
            return false;
    }
    return true;
}
