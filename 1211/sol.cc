#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    map<char, char> m;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
        m[a[i]] = b[i];
    cin.get();
    cout << b << endl;
    cout << a << endl;
    for (char c = cin.get(); !cin.eof(); c = cin.get())
        if (m.find(c) != m.end())
            cout << m[c];
        else
            cout << c;
}
