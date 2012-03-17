#include <iostream>
using namespace std;

int main(void)
{
    string s;
    cin >> s;
    for (bool f = true; f; ) // XXX ugly...
    {
        f = false;
        for (string::iterator it = s.begin() + 2; it < s.end(); ++it)
            if (*it == *(it - 2))
            {
                s.erase(it);
                s.erase(it - 2);
                f = true;
                break;
            }
    }
    cout << s.size() << endl;
}
