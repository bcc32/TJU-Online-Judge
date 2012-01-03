#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int atoi(string s);
string itoa(int n);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        string foo = itoa(a), bar = itoa(b);
        reverse(foo.begin(), foo.end());
        reverse(bar.begin(), bar.end());
        string ss = itoa(atoi(foo) + atoi(bar));
        reverse(ss.begin(), ss.end());
        cout << atoi(ss) << endl;
    }
}

int atoi(string s)
{
    int n;
    stringstream ss(stringstream::in | stringstream::out);
    ss << s;
    ss >> n;
    return n;
}

string itoa(int n)
{
    stringstream ss(stringstream::in | stringstream::out);
    ss << n;
    return ss.str();
}
