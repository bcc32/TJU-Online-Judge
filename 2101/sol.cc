#include <iostream>
using namespace std;

int score(double x, double y);

int main(void)
{
    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
    for (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >>
        x6 >> y6; x1 != -100.0; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >>
        x4 >> y4 >> x5 >> y5 >> x6 >> y6)
    {
        int p1 = score(x1, y1) + score(x2, y2) + score(x3, y3);
        int p2 = score(x4, y4) + score(x5, y5) + score(x6, y6);
        cout << "SCORE: " << p1 << " to " << p2 << ", ";
        if (p1 > p2)
            cout << "PLAYER 1 WINS." << endl;
        else if (p1 < p2)
            cout << "PLAYER 2 WINS." << endl;
        else
            cout << "TIE." << endl;
    }
}

int score(double x, double y)
{
    if (x * x + y * y <= 9.0) return 100;
    else if (x * x + y * y <= 36.0) return 80;
    else if (x * x + y * y <= 81.0) return 60;
    else if (x * x + y * y <= 144.0) return 40;
    else if (x * x + y * y <= 225.0) return 20;
    else return 0;
}
