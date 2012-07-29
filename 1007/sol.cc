#include <iostream>
#include <map>
using namespace std;

bool test(int, int);

int main(void)
{
    map<int, int> dict;
    int k;
    for (cin >> k; k != 0; cin >> k)
    {
        if (dict.find(k) == dict.end())
        {
            int m = 0;
            while (!test(k, ++m));
            dict[k] = m;
        }
        cout << dict[k] << endl;
    }
}

bool test(int k, int m)
{
    int prev = 0;
    for (int i = k * 2; i > k; i--)
    {
        prev = (prev + m - 1) % i;
        if (prev < k)
            return false;
    }
    return true;
}
