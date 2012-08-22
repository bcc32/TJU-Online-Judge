#include <iostream>
#include <vector>
using namespace std;

void init(vector<double> &);

int main(void)
{
    vector<double> v;
    init(v);
    double x;
    for (cin >> x; x != 0.00; cin >> x)
    {
        for (int i = 0; i < v.size(); i++)
            if (v[i] >= x)
            {
                cout << i + 1 << " card(s)" << endl;
                break;
            }
    }
}

void init(vector<double> &v)
{
    double s = 0.00;
    for (int i = 1; s <= 5.20; i++)
    {
        s += 1.0 / (i + 1);
        v.push_back(s);
    }
}
