#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2, x, y, r;
        cin >> x1 >> y1 >> x2 >> y2 >> x >> y >> r;
        if (x - r >= x1 && x + r <= x2 && y - r >= y1 && y + r <= y2)
            cout << "Just do it" << endl;
        else
            cout << "Don't get close to it" << endl;
    }
}
