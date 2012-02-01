#include <iostream>
#include <vector>
using namespace std;

class rect
{
    public:
        int xmin, xmax, ymin, ymax;
        bool covers(rect a);
};

bool rect::covers(rect a)
{
    return xmin <= a.xmin && xmax >= a.xmax && ymin <= a.ymin && ymax >= a.ymax;
}

int main(void)
{
    int n;
    for (cin >> n; !cin.eof(); cin >> n)
    {
        vector<rect> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i].xmin >> v[i].xmax >> v[i].ymin >> v[i].ymax;
        int c = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (i == j)
                    continue;
                else if (v[j].covers(v[i]))
                {
                    c++;
                    break;
                }
        cout << c << endl;
    }
}
