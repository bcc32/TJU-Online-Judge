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
        for (int j = 1; j <= m; j++)
            s += j * (j + 1) * (j + 2) / 2;
        cout << i + 1 << " " << m << " " << s << endl;
    }
}
