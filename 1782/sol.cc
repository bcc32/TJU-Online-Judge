#include <iostream>
#include <vector>
#define max(a, b) ((a) > (b) ? (a) : (b))
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int m = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            c = max(0, c + v[i]);
            m = max(m, c);
        }
        if (m == 0)
            cout << "Losing streak." << endl;
        else
            cout << "The maximum winning streak is " << m << "." << endl;
    }
}
