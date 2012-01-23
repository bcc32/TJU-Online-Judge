#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

string itoa(int n);
int atoi(string s);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        string x = itoa(a);
        reverse(x.begin(), x.end());
        string y = itoa(b);
        reverse(y.begin(), y.end());
        cout << atoi(x) + atoi(y) << endl << endl;
    }
}

string itoa(int n)
{
    ostringstream ss;
    ss << n;
    return ss.str();
}

int atoi(string s)
{
    int n;
    stringstream ss(stringstream::in | stringstream::out);
    ss << s;
    ss >> n;
    return n;
}
