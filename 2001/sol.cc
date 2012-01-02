#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, c = 0;
        cin >> m;
        string s;
        cin.ignore(1, '\n');
        for (int j = 0; j < m; j++)
        {
            cin >> s;
            if (s == "sheep")
                c++;
        }
        cout << "Case " << i + 1 << ": This list contains " << c << " sheep." 
            << endl;
        if (i < n - 1)
            cout << endl;
    }
}
