#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n, m, c, k = 0;
    for (cin >> n >> m >> c; n != 0 || m != 0 || c != 0; cin >> n >> m >> c)
    {
        k++;
        vector<int> v(n);
        vector<bool> status(n);
        int s = 0, max = 0;
        bool blown = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            status[n] = false;
        }
        for (int i = 0; i < m; i++)
        {
            int foo;
            cin >> foo;
            status[foo - 1] = !status[foo - 1];
            if (status[foo - 1])
                s += v[foo - 1];
            else
                s -= v[foo - 1];
            if (s > c)
                blown = true;
            if (s > max)
                max = s;
        }
        cout << "Sequence " << k << endl;
        if (blown)
            cout << "Fuse was blown." << endl << endl;
        else
        {
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was "
                << max << " amperes." << endl;
            cout << endl;
        }
    }
}
