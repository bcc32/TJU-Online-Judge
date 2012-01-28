#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; !cin.eof(); cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int m = 0, c = 1;
        for (vector<int>::iterator it = v.begin() + 1; it < v.end(); it++)
        {
            if (*it > *(it - 1)) c++;
            else
            {
                if (c > m)
                    m = c;
                c = 1;
            }
        }
        cout << m << endl;
    }
}
