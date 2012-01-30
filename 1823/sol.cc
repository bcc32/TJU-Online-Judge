#include <iostream>
using namespace std;

string spaces(int n);

int main(void)
{
    int n;
    for (cin >> n; !cin.eof(); cin >> n)
    {
        string s = "-";
        for (int i = 0; i < n; i++)
            s += spaces(s.size()) + s;
        cout << s << endl;
    }
}

string spaces(int n)
{
    string s = "";
    for (int i = 0; i < n; i++)
        s += " ";
    return s;
}
