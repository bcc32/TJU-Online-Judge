#include <iostream>
#include <vector>
using namespace std;

void init(vector<int> &);

int main(void)
{
    vector<int> primes;
    vector<int> ways(10001);
    init(primes);
    for (int i = 0; i < primes.size(); i++)
    {
        int s = 0;
        for (int j = i; j < primes.size(); j++)
        {
            s += primes[j];
            if (s >= ways.size())
                break;
            ways[s]++;
        }
    }
    int n;
    for (cin >> n; n != 0; cin >> n)
        cout << ways[n] << endl;
}

void init(vector<int> &v)
{
    v.push_back(2);
    for (int i = 3; i < 10000; i += 2)
    {
        bool prime = true;
        for (int j = 0; j < v.size() && v[j] * v[j] <= i; j++)
            if (i % v[j] == 0)
            {
                prime = false;
                break;
            }
        if (prime)
            v.push_back(i);
    }
}
