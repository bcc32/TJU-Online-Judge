#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        ostringstream x, y;
        stringstream ss (stringstream::in | stringstream::out);
        string foo, bar;
        cin >> a >> b;
        x << a;
        y << b;
        foo = x.str();
        bar = y.str();
        reverse(foo.begin(), foo.end());
        reverse(bar.begin(), bar.end());
        ss << foo << " " << bar;
        ss >> a >> b;
        int m = a + b;
        ostringstream mm;
        mm << m;
        string z = mm.str();
        reverse(z.begin(), z.end());
        stringstream zz (stringstream::in | stringstream::out);
        zz << z;
        int zx;
        zz >> zx;
        cout << zx << endl;
    }
}
