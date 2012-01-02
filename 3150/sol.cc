#include <iostream>
using namespace std;

int lcm(int a, int b);
int gcd(int a, int b);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << i + 1 << " " << lcm(a, b) << " " << gcd(a, b) << endl;
    }
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int gcd(int a, int b)
{
    if (a < b)
        return gcd(b, a);
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}
