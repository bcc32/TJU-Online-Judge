#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int _n = 0; _n < n; _n++)
    {
        double a, b;
        cin >> a >> b;

        double y = a * a + b * b;
        int x = (int)(M_PI * y / 100);

        cout << "Property " << _n + 1 << ": This property will begin eroding" <<
            " in year " << x + 1 << "." << endl;
    }
    cout << "END OF OUTPUT." << endl;
}
