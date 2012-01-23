#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b);
int lcm(vector<int> v);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> v(m);
        for (int j = 0; j < m; j++)
            cin >> v[j];
        cout << lcm(v) << endl;
    }
}

int gcd(int a, int b)
{
    if (a < b)
        return gcd(b, a);
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int lcm(vector<int> v)
{
    int l = 1;
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
        l = l / gcd(l, *it) * *it;
    return l;
}
