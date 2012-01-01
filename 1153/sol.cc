#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore(1, '\n');
        string s;
        ostringstream ss;
        while (cin.peek() != '\n')
        {
            cin >> s;
            reverse(s.begin(), s.end());
            ss << s << " ";
        }
        s = ss.str();
        cout << s.substr(0, s.size() - 1) << endl;
    }
}
