#include <iostream>
// #include <vector>
using namespace std;

int cfac(int n);

int main(void)
{
    /*
    vector<int> v(1000000);
    for (int i = 1; i <= 1000000; i++)
        v[i - 1] = cfac(i);
    */
    int n;
    for (cin >> n; n != 0; cin >> n)
        // cout << n << " : " << v[n - 1] << endl;
        cout << n << " : " << cfac(n) << endl;
}

int cfac(int n)
{
    int c = 0, o = n;
    for (int i = 2; i * 2 <= o; i++)
        if (n % i == 0)
        {
            c++;
            while (n % i == 0)
                n /= i;
        }
    return c;
}
