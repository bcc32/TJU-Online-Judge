#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y;
        if (x == 0 && y == 0)
            z = 0;
        else if (x == y || x == y + 2)
            if (x % 2 == 0)
                z = x + y;
            else
                z = x + y - 1;
        else
            z = -1;
        if (z >= 0)
            cout << z << endl;
        else
            cout << "No Number" << endl;
    }
}
