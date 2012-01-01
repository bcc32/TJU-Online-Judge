#include <iostream>
#include <cassert>
#include <vector>
#include <sstream>
using namespace std;

int haab(int d, string m, int y)
{
    int mon;
    if (m == "pop") mon = 0;
    else if (m == "no") mon = 1;
    else if (m == "zip") mon = 2;
    else if (m == "zotz") mon = 3;
    else if (m == "tzec") mon = 4;
    else if (m == "xul") mon = 5;
    else if (m == "yoxkin") mon = 6;
    else if (m == "mol") mon = 7;
    else if (m == "chen") mon = 8;
    else if (m == "yax") mon = 9;
    else if (m == "zac") mon = 10;
    else if (m == "ceh") mon = 11;
    else if (m == "mac") mon = 12;
    else if (m == "kankin") mon = 13;
    else if (m == "muan") mon = 14;
    else if (m == "pax") mon = 15;
    else if (m == "koyab") mon = 16;
    else if (m == "cumhu") mon = 17;
    else if (m == "uayet") mon = 18;
    else assert(false);
    return d + 20 * mon + 365 * y;
}

string tzolkin(int n)
{
    string temp[] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", 
        "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", 
        "cib", "caban", "eznab", "canac", "ahau"};
    vector<string> months(temp, temp + 20);
    ostringstream ss;
    int d, mon, y;
    y = n / 260;
    n %= 260;
    mon = n % 20;
    d = n % 13 + 1;
    ss << d << " " << months.at(mon) << " " << y;
    return ss.str();
}

int main(void)
{
    int n;
    cin >> n;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        int d, y;
        string m;
        cin >> d;
        cin.ignore(1, ' ');
        cin >> m >> y;
        cout << tzolkin(haab(d, m, y)) << endl;
    }
}
