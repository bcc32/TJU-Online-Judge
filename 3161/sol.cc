#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        int s = 0;
        for (int j = a - 1; j < b; j++)
            s += v[j];
        cout << s << endl;
    }
}
