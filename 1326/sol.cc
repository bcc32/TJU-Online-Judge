#include <iostream>
using namespace std;

char soundex(char c)
{
    if (c == 'B' || c == 'F' || c == 'P' || c == 'V')
        return '1';
    else if (c == 'C' || c == 'G' || c == 'J' || c == 'K' || c == 'Q' || 
        c == 'S' || c == 'X' || c == 'Z')
        return '2';
    else if (c == 'D' || c == 'T')
        return '3';
    else if (c == 'L')
        return '4';
    else if (c == 'M' || c == 'N')
        return '5';
    else if (c == 'R')
        return '6';
    else
        return 0;
}

int main(void)
{
    string s;
    for (cin >> s; !cin.eof(); cin >> s)
    {
        char last = ' ';
        string o;
        for (string::iterator it = s.begin(); it < s.end(); it++)
        {
            if (soundex(*it) > 0 && soundex(*it) != soundex(*(it - 1)))
                o += soundex(*it);
            last = soundex(*it);
        }
        cout << o << endl;
    }
}
