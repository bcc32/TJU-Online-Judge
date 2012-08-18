#include <iostream>
#include <map>
#include <utility>
using namespace std;

map< pair< pair<int, int>, int >, int > m;

int w(int, int, int);

int main(void)
{
    int a, b, c;
    for (cin >> a >> b >> c; a != -1 || b != -1 || c != -1; cin >> a >> b >> c)
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c)
            << endl;
}

int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);
    if (m.find(make_pair(make_pair(a, b), c)) != m.end())
        return m[make_pair(make_pair(a, b), c)];
    if (a < b && b < c)
    {
        int foo = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        m[make_pair(make_pair(a, b), c)] = foo;
        return foo;
    }
    else
    {
        int foo = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) -
            w(a - 1, b - 1, c - 1);
        m[make_pair(make_pair(a, b), c)] = foo;
        return foo;
    }
}
