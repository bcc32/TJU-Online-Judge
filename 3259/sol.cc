#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nfactor(int n);

int main(void)
{
    vector<bool> v(1);
    v[0] = 0;
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
    {
        int c = 0;
        if (b >= v.size())
        {
            int s = v.size();
            v.resize(b + 1);
            for (int i = s; i <= b; i++)
                v[i] = i % nfactor(i) == 0;
        }
        cout << count(v.begin(), v.end(), true) << endl;
    }
}

int nfactor(int n)
{
    if (n == 1) return 1;
    int i, c = 0;
    for (i = 1; i * i < n; i++)
        if (n % i == 0) c += 2;
    if (i * i == n) c++;
    return c;
}
