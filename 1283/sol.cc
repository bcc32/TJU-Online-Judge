#include <iostream>
#include <sstream>
using namespace std;

string split(string, char, int);
bool isdig(char);
int atoi(string);
int floordiv(int, int);

int main(void)
{
    int t;
    cin >> t;
    cin.ignore(1, '\n');
    for (int i = 0; i < t; i++)
    {
        string str;
        getline(cin, str);
        string lhs = split(str, '=', 0);
        string rhs = split(str, '=', 1);
        int lx = 0, lc = 0, rx = 0, rc = 0;
        string curr = "";
        bool neg = false;
        for (int i = 0; i < lhs.size(); i++)
        {
            if (isdig(lhs[i]))
                curr += lhs[i];
            else if (lhs[i] == '-')
            {
                lc += neg ? -atoi(curr) : atoi(curr);
                neg = true;
                curr = "";
            }
            else if (lhs[i] == '+')
            {
                lc += neg ? -atoi(curr) : atoi(curr);
                neg = false;
                curr = "";
            }
            else if (lhs[i] == 'x')
            {
                if (curr == "")
                    lx += neg ? -1 : 1;
                else
                    lx += neg ? -atoi(curr) : atoi(curr);
                curr = "";
            }
        }
        if (curr != "")
            lc += neg ? -atoi(curr) : atoi(curr);
        curr = "";
        neg = false;
        for (int i = 0; i < rhs.size(); i++)
        {
            if (isdig(rhs[i]))
                curr += rhs[i];
            else if (rhs[i] == '-')
            {
                rc += neg ? -atoi(curr) : atoi(curr);
                neg = true;
                curr = "";
            }
            else if (rhs[i] == '+')
            {
                rc += neg ? -atoi(curr) : atoi(curr);
                neg = false;
                curr = "";
            }
            else if (rhs[i] == 'x')
            {
                if (curr == "")
                    rx += neg ? -1 : 1;
                else
                    rx += neg ? -atoi(curr) : atoi(curr);
                curr = "";
            }
        }
        if (curr != "")
            rc += neg ? -atoi(curr) : atoi(curr);
        lx -= rx;
        rc -= lc;
        if (lx == 0)
            if (rc == 0)
                cout << "IDENTITY" << endl;
            else
                cout << "IMPOSSIBLE" << endl;
        else
            cout << floordiv(rc, lx) << endl;
    }
}

string split(string str, char ch, int part)
{
    int i, j;
    for (i = 0; i < str.size() && part > 0; i++)
        if (str[i] == ch)
            part--;
    if (part > 0)
        return "";
    for (j = 1; i + j <= str.size() && str[i + j - 1] != ch; j++);
    return str.substr(i, j - 1);
}

bool isdig(char ch)
{
    return ch >= '0' && ch <= '9';
}

int atoi(string str)
{
    if (str.size() == 0)
        return 0;
    int x;
    istringstream ss;
    ss.str(str);
    ss >> x;
    return x;
}

int floordiv(int x, int y)
{
    if (x * y >= 0)
        return x / y;
    else
        return x / y - 1;
}
