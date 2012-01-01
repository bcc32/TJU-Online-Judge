#include <iostream>
using namespace std;

int main(void)
{
    int n, m;
    int i = 1;
    for (cin >> n >> m; n != 0 || m != 0; cin >> n >> m)
    {
        int c = 0;
        for (int a = 1; a < n; a++)
            for (int b = a + 1; b < n; b++)
                if ((a * a + b * b + m) % (a * b) == 0)
                    c++;
        cout << "Case " << i << ": " << c << endl;
        i++;
    }
}
