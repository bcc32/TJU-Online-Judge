#include <iostream>
using namespace std;

int main(void)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    double f, b;
    cin >> f;
    for (cin >> b; b != 999; cin >> b)
    {
        cout << b - f << endl;
        f = b;
    }
    cout << "End of Output" << endl;
}
