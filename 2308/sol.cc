#include <iostream>
#include <map>
using namespace std;

map<int, int> factors;

void factor(int);
void unfactor(int);

int main(void)
{
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
    {
        factors.clear();
        if (a >= 2 * b)
            b = a - b;
        for (int i = a; i > b; i--)
            factor(i);
        for (int i = a - b; i > 1; i--)
            unfactor(i);
        long long p = 1;
        for (map<int, int>::iterator it = factors.begin();
            it != factors.end(); ++it)
            p *= it->second + 1;
        cout << p << endl;
    }
}

void factor(int n)
{
    int o = n;
    for (int i = 2; i * i <= o; i++)
        while (n % i == 0)
        {
            factors[i]++;
            n /= i;
        }
    if (n > 1)
        factors[n]++;
}

void unfactor(int n)
{
    int o = n;
    for (int i = 2; i * i <= o; i++)
        while (n % i == 0)
        {
            factors[i]--;
            n /= i;
        }
    if (n > 1)
        factors[n]--;
}
