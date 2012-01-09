#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> v(m);
        for (int j = 0; j < m; j++)
            cin >> v[j];
        int c = 0;
        for (int j = 0; j < v.size(); j++)
            for (int k = j + 1; k < v.size(); k++)
                if (v[j] > v[k])
                    c++;
        cout << "Scenario #" << i + 1 << ":" << endl << c << endl << endl;
    }
}
