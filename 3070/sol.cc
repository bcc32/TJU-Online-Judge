#include <iostream>
using namespace std;

char cipher(char ch, int d);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int d;
        cin >> d;
        for (int j = 0; j < s.size(); j++)
            cout << cipher(s[j], d);
        cout << endl;
    }
}

char cipher(char ch, int d)
{
    return (char)(((int)ch - (int)'a' + d) % 26) + 'a';
}
