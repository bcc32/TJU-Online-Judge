#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    cout.setf(ios::oct, ios::basefield);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int n = 0;
        for (int i = 0; i < s.size(); i++)
            n += (int)(s[s.size() - i - 1] - '0') << i;
        cout << n << endl;
    }
}
