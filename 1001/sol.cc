#include <iostream>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; !cin.eof(); cin >> n)
        cout << (char) n;
}
