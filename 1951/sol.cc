#include <iostream>
#include <vector>
#include <sstream>
#define abs(x) ((x) > 0 ? (x) : -(x))
using namespace std;

string term(int, int, bool);

int main(void)
{
    int c;
    vector<int> v;
    for (cin >> c; !cin.eof(); cin >> c)
    {
        v.clear();
        v.push_back(c);
        for (int i = 1; i < 9; i++)
        {
            cin >> c;
            v.push_back(c);
        }
        ostringstream ss;
        for (int i = 0; i < 9; i++)
            if (ss.tellp() == 0)
                ss << term(v[i], 8 - i, true);
            else
                ss << term(v[i], 8 - i, false);
        cout << ss.str() << endl;
    }
}

string term(int coeff, int deg, bool first)
{
    if (coeff == 0)
        return "";
    ostringstream ss;
    if (first && coeff < 0)
        ss << "-";
    else if (!first)
        ss << (coeff < 0 ? " - " : " + ");
    if (deg == 0 || (deg > 0 && abs(coeff) > 1))
        ss << abs(coeff);
    if (deg > 0)
        ss << "x";
    if (deg > 1)
        ss << "^" << deg;
    return ss.str();
}
