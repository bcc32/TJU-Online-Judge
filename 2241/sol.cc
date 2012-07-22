#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

bool find(int, int);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        v.clear();
        int m;
        cin >> m;
        v.resize(m);
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
            if (find(a, b))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}

bool find(int b, int a)
{
    if (b == 0)
        return true;
    for (int j = v[a]; j != 0; j = v[j])
        if (j == b)
            return true;
    return false;
}
