#include <iostream>
#include <vector>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
using namespace std;

void init(vector<int> &);

int main(void)
{
    vector<int> primes;
    init(primes);
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
    {
        int i, j;
        for (i = 0; i < primes.size() && primes[i] <= a; i++)
            ;
        j = max(0, a % 2 == 0 ? i / 2 - b : i / 2 + 1 - b);
        cout << a << " " << b << ":";
        for (int k = j; k < min(i, i / 2 + b); k++)
            cout << " " << primes[k];
        cout << endl << endl;
    }
}

void init(vector<int> &v)
{
    v.push_back(1);
    v.push_back(2);
    for (int i = 3; i < 1000; i++)
    {
        bool prime = true;
        for (int j = 1; j < v.size() && v[j] * v[j] <= i; j++)
            if (i % v[j] == 0)
            {
                prime = false;
                break;
            }
        if (prime)
            v.push_back(i);
    }
}
