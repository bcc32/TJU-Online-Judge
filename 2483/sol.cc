#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int r, e, c;
        cin >> r >> e >> c;
        if (e - c > r)
            cout << "advertise" << endl;
        else if (e - c == r)
            cout << "does not matter" << endl;
        else
            cout << "do not advertise" << endl;
    }
}
