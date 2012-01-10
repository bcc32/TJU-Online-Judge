#include <iostream>
using namespace std;

int main(void)
{
    int n, c = 0, x;
    cin >> n;
    cin >> x;
    for (int i = 1; i < n; i++)
    {
        int z;
        cin >> z;
        if (z > x)
            c++;
    }
    cout << c + 1 << endl;
}
