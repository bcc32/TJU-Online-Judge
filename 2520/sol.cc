#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    for (getline(cin, s); s != "#"; getline(cin, s))
    {
        int x = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                x += (i + 1) * ((int)s[i] - (int)'A' + 1);
        cout << x << endl;
    }
}
