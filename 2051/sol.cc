#include <iostream>
#define HEIGHT 168
using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= HEIGHT)
        cout << "CRASH " << a << endl;
    else if (b <= HEIGHT)
        cout << "CRASH " << b << endl;
    else if (c <= HEIGHT)
        cout << "CRASH " << c << endl;
    else
        cout << "NO CRASH" << endl;
}
