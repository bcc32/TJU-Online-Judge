#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' ||
            s[0] == 'u')
            cout << s << "cow" << endl;
        else
            cout << s.substr(1) << s[0] << "ow" << endl;
    }
}
