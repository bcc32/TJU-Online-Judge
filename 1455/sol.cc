#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int c = 0;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (v[i] > v[j])
                    c++;
        cout << c << endl;
    }
}
