#include <iostream>
using namespace std;

int main(void)
{
    string s, t;
    for (cin >> s >> t; !cin.eof(); cin >> s >> t)
    {
        int j = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (j >= s.size())
                break;
            if (s[j] == t[i])
                j++;
        }
        if (j < s.size())
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}
