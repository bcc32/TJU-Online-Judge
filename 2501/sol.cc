#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c = 0, x = 0;
        string s;
        cin >> s;
        for (string::iterator it = s.begin(); it < s.end(); it++)
        {
            if (*it == 'O')
                x += ++c;
            else
                c = 0;
        }
        cout << x << endl;
    }
}
