#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    cout.setf(ios::fixed);
    cout.precision(3);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, s = 0, c = 0;
        cin >> m;
        vector<int> v(m);
        for (int j = 0; j < m; j++)
        {
            cin >> v[j];
            s += v[j];
        }
        for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
            if (*it * v.size() > s)
                c++;
        cout << (double)c / v.size() * 100 << "%" << endl;
    }
}
