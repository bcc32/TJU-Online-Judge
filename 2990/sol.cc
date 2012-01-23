#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c = 0;
        cin >> a;
        vector<int> u(a);
        for (int j = 0; j < a; j++)
            cin >> u[j];
        cin >> b;
        vector<int> v(b);
        for (int j = 0; j < b; j++)
            cin >> v[j];
        for (vector<int>::iterator it = u.begin(); it < u.end(); it++)
            c += count(v.begin(), v.end(), -*it);
        cout << c << endl;
    }
}
