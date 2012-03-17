#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        int max = -1;
        for (vector<int>::iterator it = v.begin(); it < v.end(); ++it)
        {
            for (vector<int>::iterator a = v.begin(); a < v.end(); a++)
            {
                if (a == it)
                    continue;
                for (vector<int>::iterator b = v.begin(); b < v.end(); b++)
                {
                    if (b == it || b == a)
                        continue;
                    if (*a + *b == *it)
                        max = *it;
                }
            }
        }
        cout << max << endl;
    }
}
