#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long gcd(long long, long long);

int main(void)
{
    long long n, t;
    int m = 1;
    for (cin >> n >> t; n != 0 || t != 0; cin >> n >> t)
    {
        vector<int> v(n);
        int c = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        if (t > 0)
            for (int i = 0; i < n; i++)
            {
                if (v[i] > 0)
                {
                    long long x = t / v[i];
                    for (int j = n - 1; j >= 0; j--)
                        if (v[j] > x)
                            c++;
                        else
                            break;
                }
                else if (v[i] < 0)
                {
                    long long x = t / v[i];
                    for (int j = 0; j < n; j++)
                        if (v[j] < x)
                            c++;
                        else
                            break;
                }
            }
        else if (t == 0)
            for (int i = 0; i < n; i++)
            {
                if (v[i] > 0)
                    for (int j = n - 1; j >= 0; j--)
                        if (v[j] > 0)
                            c++;
                        else
                            break;
                else if (v[i] < 0)
                    for (int j = 0; j < n; j++)
                        if (v[j] < 0)
                            c++;
                        else
                            break;
            }
        else
            for (int i = 0; i < n; i++)
            {
                if (v[i] > 0)
                {
                    long long x = t / v[i];
                    for (int j = n - 1; j >= 0; j--)
                        if (v[j] >= x)
                            c++;
                        else
                            break;
                }
                else if (v[i] == 0)
                    c += n;
                else
                {
                    long long x = t / v[i];
                    for (int j = 0; j < n; j++)
                        if (v[j] <= x)
                            c++;
                        else
                            break;
                }
            }
        long long g = gcd(c, n * n);
        cout << "Case " << m++ << ": " << c / g << "/" << n * n / g << endl;
    }
}

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
