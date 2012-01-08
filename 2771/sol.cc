#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int *v = (int *) calloc(52, sizeof(int));
        for (string::iterator it = s.begin(); it < s.end(); it++)
            if (*it >= 'A' && *it <= 'Z')
                v[(int)(*it - 'A')]++;
            else if (*it >= 'a' && *it <= 'z')
                v[(int)(*it - 'a') + 26]++;
        int m = 0, n = 0;
        // iterator through int*
        for (int i = 0; i < 52; i++)
            if (v[i] > m)
            {
                m = v[i];
                n = i;
            }
        if (n < 26)
            cout << (char)(n + (int)'A') << endl;
        else
            cout << (char)(n - 26 + (int)'a') << endl;
    }
}
