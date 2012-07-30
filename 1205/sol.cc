#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    set<string> dict;
    set<string> cmp;
    string str;
    for (cin >> str; !cin.eof(); cin >> str)
        dict.insert(str);
    for (set<string>::iterator foo = dict.begin(); foo != dict.end(); ++foo)
        for (set<string>::iterator bar = foo; bar != dict.end(); ++bar)
        {
            if (bar == foo)
                continue;
            if (dict.find(*foo + *bar) != dict.end())
                cmp.insert(*foo + *bar);
            if (dict.find(*bar + *foo) != dict.end())
                cmp.insert(*bar + *foo);
        }
    for (set<string>::iterator it = cmp.begin(); it != cmp.end(); ++it)
        cout << *it << endl;
}
