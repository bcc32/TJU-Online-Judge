#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int x;
        unsigned long long c = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = v.size() - 1; i >= 0; i--)
        {
            c += v[i];
            for (int j = 0; j < i; j++)
                v[j] += v[i];
        }
        cout << c << endl;
    }
}
