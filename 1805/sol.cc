#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, s = 0;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            s += x;
        }
        s -= m - 1;
        cout << s << endl;
    }
}
