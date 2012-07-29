#include <iostream>
using namespace std;

bool test(int, int);

int main(void)
{
    int k;
    for (cin >> k; k != 0; cin >> k)
    {
        int m = 0;
        while (!test(k, ++m));
        cout << m << endl;
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
