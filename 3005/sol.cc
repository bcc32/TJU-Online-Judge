#include <iostream>
using namespace std;

int main(void)
{
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        double x;
        cin >> x;
        cin.get();
        string u;
        cin >> u;
        if (u == "kg")
            cout << x * 2.2046 << " lb" << endl;
        else if (u == "lb")
            cout << x * 0.4536 << " kg" << endl;
        else if (u == "l")
            cout << x * 0.2642 << " g" << endl;
        else
            cout << x * 3.7854 << " l" << endl;
    }
}
