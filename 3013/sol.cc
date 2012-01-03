#include <iostream>
using namespace std;

int main(void)
{
    int r;
    cin >> r;
    for (int i = 0; r != 0; i++, cin >> r)
    {
        int a, b;
        cin >> a >> b;
        if (a * a + b * b > 4 * r * r)
            cout << "Pizza " << i + 1 << " does not fit on the table." << endl;
        else
            cout << "Pizza " << i + 1 << " fits on the table." << endl;
    }
}
