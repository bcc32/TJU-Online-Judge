#include <iostream>
#define max(x, y) ((x) > (y) ? (x) : (y))
using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(c - b, b - a) - 1 << endl;
}
