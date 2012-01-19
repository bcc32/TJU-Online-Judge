#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int z, i, m, l, c = 1;
    for (cin >> z >> i >> m >> l; z != 0 || i != 0 || m != 0 || l != 0; 
        cin >> z >> i >> m >> l, c++)
    {
        int x;
        vector<int> v;
        v.push_back(l);
        for (x = (z * l + i) % m; find(v.begin(), v.end(), x) == v.end(); 
            x = (z * x + i) % m)
            v.push_back(x);
        int d = v.end() - find(v.begin(), v.end(), x);
        cout << "Case " << c << ": " << d << endl;
    }
}
