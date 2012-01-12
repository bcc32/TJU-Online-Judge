#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    if (a < b)
        return gcd(b, a);
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int main(void)
{
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v.at(i);
        int x = 0, y = n * (n - 1) / 2;
        for (int i = 0; i < v.size(); i++)
            for (int j = i + 1; j < v.size(); j++)
                if (gcd(v.at(i), v.at(j)) == 1)
                    x++;
        if (x == 0)
            cout << "No estimate for this data set." << endl;
        else
            cout << sqrt(6.0 * y / x) << endl;
    }
}
