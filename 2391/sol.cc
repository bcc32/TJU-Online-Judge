#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    map<char, int> ma, mb;
    map<int, int> fa, fb;
    string a, b;
    cin >> a >> b;
    for (string::iterator it = a.begin(); it < a.end(); ++it)
        ma[*it]++;
    for (map<char, int>::iterator it = ma.begin(); it != ma.end(); ++it)
        fa[it->second]++;
    for (string::iterator it = b.begin(); it < b.end(); ++it)
        mb[*it]++;
    for (map<char, int>::iterator it = mb.begin(); it != mb.end(); ++it)
        fb[it->second]++;
    cout << (fa == fb ? "YES" : "NO") << endl;
}
