#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    for (getline(cin, s); !cin.eof(); getline(cin, s))
        cout << s << endl;
}
