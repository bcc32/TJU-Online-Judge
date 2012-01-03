#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v.at(i);
        sort(v.begin(), v.end());
        int max = v.at(v.size() - 1);
        for (vector<int>::iterator it = v.end() - 1; it >= v.begin(); it--)
        {
            if (*it < max)
            {
                cout << *it << endl;
                break;
            }
        }
    }
}
