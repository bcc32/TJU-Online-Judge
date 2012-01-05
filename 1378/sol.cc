#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main(void)
{
    map<string, string> dict;
    string s;
    for (getline(cin, s); s != ""; getline(cin, s))
    {
        istringstream ss(s.c_str());
        string a, b;
        ss >> a >> b;
        dict[b] = a;
    }
    for (getline(cin, s); !cin.eof(); getline(cin, s))
        cout << (dict.find(s) != dict.end() ? dict[s] : "eh") << endl;
}
