#include <iostream>
#include <sstream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        ostringstream ss;
        int left = 0;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            while (left < x)
            {
                ss << '(';
                left++;
            }
            ss << ')';
        }
        string str = ss.str();
        ostringstream out;
        for (int j = 0; j < str.size(); j++)
            if (str[j] == ')')
            {
                int r = 1, c = 1;
                for (int k = j - 1; k > 0 && r > 0; k--)
                {
                    r += (str[k] == ')' ? 1 : -1);
                    c += (str[k] == ')' ? 1 : 0);
                }
                out << c << " ";
            }
        cout << out.str().substr(0, out.str().size() - 1) << endl;
    }
}
