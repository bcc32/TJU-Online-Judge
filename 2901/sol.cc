#include <iostream>
#include <sstream>
#include <map>
using namespace std;

map<int, int> factors;

void factor(int);
void unfactor(int);

int main(void)
{
    int n, r;
    for (cin >> n >> r; !cin.eof(); cin >> n >> r)
    {
        factors.clear();
        int foo = (n >= r * 2 ? n - r : r);
        for (int i = n; i > foo; i--)
            factor(i);
        for (int i = 2; i <= n - foo; i++)
            unfactor(i);
        ostringstream ss;
        for (map<int, int>::iterator it = factors.begin();
            it != factors.end(); ++it)
            for (int i = 0; i < it->second; i++)
                ss << it->first << " * ";
        string str = ss.str();
        cout << n << "C" << r << " = " <<
            str.substr(0, str.size() - 3) << endl;
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
