#include <iostream>
#include <vector>
#define abs(x) ((x) > 0 ? (x) : -(x))
using namespace std;

int main(void)
{
    int n, i = 1;
    for (cin >> n; n != 0; cin >> n, i++)
    {
        cout << "Set #" << i << endl;
        vector<int> v(n);
        int s = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
            s += v[j];
        }
        int a = s / n;
        int x = 0;
        for (vector<int>::iterator it = v.begin(); it < v.end(); ++it)
            x += abs(*it - a);
        cout << "The minimum number of moves is " << x / 2 << "." << endl
            << endl;
    }
}
