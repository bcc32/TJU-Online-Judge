#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isupper(char);
string parse(string);

int main(void)
{
    int n;
    cin >> n;
    cin.ignore(1, '\n');
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        cout << parse(str) << endl;
    }
}

bool isupper(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

string parse(string str)
{
    ostringstream ss;
    for (int i = 0; i < str.size(); i++)
        if (isupper(str[i]))
            ss << str[i];
        else if (str[i] == '+' || str[i] == '-')
            ss << str[i];
        else if (str[i] == '(')
        {
            int r = 1, j;
            for (j = i + 1; j < str.size() && r > 0; j++)
                r += (str[j] == '(' ? 1 : (str[j] == ')' ? -1 : 0));
            string s = parse(str.substr(i + 1, j - i - 2));
            if (i == 0 || str[i - 1] == '+' || s.size() == 1)
                ss << s;
            else
                ss << '(' << parse(str.substr(i + 1, j - i - 2)) << ')';
            i = j - 1;
        }
    return ss.str();
}
