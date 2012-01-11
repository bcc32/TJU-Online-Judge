#include <iostream>
#define abs(x) ((x) > 0 ? x : -x)
using namespace std;

int main(void)
{
    int bw, bl, cw, cl, dw, dl;
    for (cin >> bw >> bl >> cw >> cl >> dw >> dl; bw != 0 || bl != 0 || 
        cw != 0 || cl != 0 || dw != 0 || dl != 0; cin >> bw >> bl >> cw >> cl
        >> dw >> dl)
    {
        int g = bw + bl;
        // number of wins (all four) should be half the number of games played
        // (all four) therefore 2 * g and then just complement
        cout << "Anna's won-loss record is " << (2 * g - bw - cw - dw)
            << "-" << (2 * g - bl - cl - dl) << "." << endl;
    }
}
