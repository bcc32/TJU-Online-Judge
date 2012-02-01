#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != -1; cin >> n)
    {
        vector<int> v;
        v.push_back(n);
        int m;
        for (cin >> m; m != 0; cin >> m)
            v.push_back(m);
        int c = 0;
        for (int i = 0; i < v.size(); i++)
            if (v[i] % 2 == 0)
                for (int j = 0; j < v.size(); j++)
                    if (v[j] * 2 == v[i]) c++;
        cout << c << endl;
    }
}
