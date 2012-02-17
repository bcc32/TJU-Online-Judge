#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        map<int, int> v;
        for (int j = 1; j < m; j++)
        {
            int a, b;
            cin >> a >> b;
            v[a] = b;
        }
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int a, b;
            cin >> a >> b;
            int x = b;
            while (x != a)
            {
                if (x == 0)
                    break;
                else x = v[x];
            }
            if (x == a && a != b)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}
