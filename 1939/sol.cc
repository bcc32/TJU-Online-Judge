#include <iostream>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != -1; cin >> n)
    {
        int pos = 0;
        int x, y, s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            int t = pos;
            pos = y;
            y -= t;
            s += y * x;
        }
        cout << s << " miles" << endl;
    }
}
