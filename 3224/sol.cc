#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long r, c;
        cin >> r >> c;
        cout << r * c - 1 << endl;
    }
}
