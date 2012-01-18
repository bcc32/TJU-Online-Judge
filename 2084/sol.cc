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
    for (cin >> d >> r >> t; r != 0; cin >> d >> r >> t, i++)
        cout << "Trip #" << i << ": " << PI * d * r / MIIN << " "
            << PI * d * r * HRSEC / t / MIIN << endl;
}
