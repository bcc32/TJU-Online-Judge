#include <iostream>
using namespace std;

int main(void)
{
    int n, u, d;
    for (cin >> n >> u >> d; n != 0 || u != 0 || d != 0; cin >> n >> u >> d)
    {
        int x = 0;
        int t;
        for (t = 0; x < n; t++)
            if (t % 2 == 0) x += u;
            else x -= d;
        cout << t << endl;
    }
}
