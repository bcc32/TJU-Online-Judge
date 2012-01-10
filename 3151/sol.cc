#include <iostream>
#include <string>
using namespace std;

string key;
string dec(string s);

int main(void)
{
    int n;
    cin >> n;
    cin.get(); // flush
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        getline(cin, key);
        cout << i + 1 << " " << dec(s) << endl;
    }
}

string dec(string s)
{
    string f;
    for (string::iterator it = s.begin(); it < s.end(); it++)
        if (*it == ' ')
            f += ' ';
        else
            f += key[(int)*it - (int)'A'];
    return f;
}
