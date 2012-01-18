#include <iostream>
#define PI 3.1415927
#define MIIN 63360
#define HRSEC 3600
using namespace std;

int main(void)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    double d, t;
    int r, i = 1;
    for (cin >> d >> r >> t; r != 0; cin >> d >> r >> t)
        cout << "Trip #" << i << ": " << 2 * PI * (d / 2 / MIIN) * r << " "
            << 2 * PI * (d / 2 / MIIN) * r / (t / HRSEC) << endl;
}
