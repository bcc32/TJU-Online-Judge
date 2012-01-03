#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    cout.setf(ios::fixed);
    cout.precision(3);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double a, b, c;
        cin >> a >> b >> c;
        if (b * b > 4 * a * c)
            cout << (-b - sqrt(b * b - 4 * a * c)) / (2 * a) << " " << 
                (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
        else if (b * b == 4 * a * c)
            cout << -b / (2 * a) << endl;
        else
            cout << "No solution!" << endl;
    }
}
