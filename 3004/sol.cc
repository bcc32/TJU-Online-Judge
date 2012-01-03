#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        cin.get();
        string s;
        cin >> s;
        cout << i + 1 << " " << s.substr(0, j - 1) << s.substr(j) << endl;
    }
}
