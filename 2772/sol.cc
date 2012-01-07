#include <iostream>
#define sqr(x) ((x) * (x))
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ax, ay, bx, by, cx, cy, dx, dy;
        cin >> ax >> ay >> cx >> cy >> bx >> by >> dx >> dy;
        if (sqr(ax - dx) + sqr(ay - dy) == sqr(bx - cx) + sqr(by - cy) &&
            sqr(ax - bx) + sqr(ay - by) == sqr(dx - cx) + sqr(dy - cy))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
