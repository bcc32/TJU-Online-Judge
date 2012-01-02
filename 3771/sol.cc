#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b, c, d;
        int x, y, z, w;
        cin >> a >> x >> b >> y >> c >> z >> d >> w;
        if (x < y)
            if (x < z)
                if (x < w)
                    cout << "Poor " << a << endl;
                else
                    cout << "Poor " << d << endl;
            else
                if (w < z)
                    cout << "Poor " << d << endl;
                else
                    cout << "Poor " << c << endl;
        else
            if (z < y)
                if (w < z)
                    cout << "Poor " << d << endl;
                else
                    cout << "Poor " << c << endl;
            else
                if (w < y)
                    cout << "Poor " << d << endl;
                else
                    cout << "Poor " << b << endl;
    }
}
