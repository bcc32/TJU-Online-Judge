#include <iostream>
using namespace std;

int main(void)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    double s = 0.0, x;
    for (int i = 0; i < 12; i++)
    {
        cin >> x;
        s += x;
    }
    cout << "$" << s / 12.0 << endl;
}
