#include <iostream>
#include <vector>
using namespace std;

int powm10(int b, int e);

int main(void)
{
    vector<int> v;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (j == 0)
                v.push_back(1);
            else
                v.push_back(powm10(i, j));
    int m, n;
    for (cin >> m >> n; m != 0 || n != 0; cin >> m >> n)
        cout << v.at((m % 4) * 4 + (n % 4)) << endl;
}

int powm10(int b, int e)
{
    if (e == 0)
        return 1;
    b %= 10;
    e %= 4;
    if (b == 0 || b == 1 || b == 5 || b == 6 || e == 1)
        return b;
    else if (b == 2)
        return e == 0 ? 6 : e == 2 ? 4 : 8;
    else if (b == 3)
        return e == 0 ? 1 : e == 2 ? 9 : 7;
    else if (b == 4)
        return e == 0 || e == 2 ? 6 : 4;
    else if (b == 7)
        return e == 0 ? 1 : e == 2 ? 9 : 3;
    else if (b == 8)
        return e == 0 ? 6 : e == 2 ? 4 : 2;
    else
        return e == 0 || e == 2 ? 1 : 9;
}
