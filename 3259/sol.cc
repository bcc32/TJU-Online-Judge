#include <iostream>
#include <vector>
using namespace std;

int nfactor(int n);

int main(void)
{
    vector<int> v(1000000);
    for (int i = 0; i < 1000000; i++)
        v[i] == nfactor(i + 1);
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
    {
        int c = 0;
        for (int i = a; i <= b; i++)
            if (i % v[i - 1] == 0) c++;
        cout << c << endl;
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
