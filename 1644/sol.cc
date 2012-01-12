#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    cin.get(); // flush
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
}
