// TODO Consider Negative Inputs

#include <iostream>
#include <vector>
#include <sstream>
#define ord(ch) ((int)((ch) - '0'))
using namespace std;

string add(string, string);
string sub(string, string);
string mul(string, string);

int main(void)
{
    string a, b;
    for (cin >> a >> b; a != "0" || b != "0"; cin >> a >> b)
    {
        cout << add(a, b) << endl;
        cout << sub(a, b) << endl;
        cout << mul(a, b) << endl;
        cout << endl;
    }
}

string add(string a, string b)
{
    if (a.size() < b.size())
        return add(b, a);
    ostringstream ss;
    bool carry = false;
    string::reverse_iterator foo, bar;
    for (foo = a.rbegin(), bar = b.rbegin(); bar < b.rend(); ++foo, ++bar)
    {
        ss << (ord(*foo) + ord(*bar) + (carry ? 1 : 0)) % 10;
        if (ord(*foo) + ord(*bar) + (carry ? 1 : 0) > 9)
            carry = true;
        else
            carry = false;
    }
    while (foo < a.rend())
    {
        ss << (ord(*foo) + (carry ? 1 : 0)) % 10;
        if (ord(*foo) + (carry ? 1 : 0) > 9)
            carry = true;
        else
            carry = false;
        ++foo;
    }
    string str = ss.str();
    return string(str.rbegin(), str.rend());
}

string sub(string a, string b)
{
    if (a.size() < b.size() || (a.size() == b.size() && a[0] < b[0]))
        return "-" + sub(b, a);
    else if ()
    ostringstream ss;
    bool carry = false;
    string::reverse_iterator foo, bar;
    for (foo = a.rbegin(), bar = b.rbegin(); bar < b.rend(); ++foo, ++bar)
    {
        ss << (ord(*foo) - ord(*bar) - (carry ? 1 : 0) + 10) % 10;
        if (ord(*foo) - ord(*bar) - (carry ? 1 : 0) < 0)
            carry = true;
        else
            carry = false;
    }
    while (foo < a.rend())
    {
        ss << (ord(*foo) - (carry ? 1 : 0) + 10) % 10;
        if (ord(*foo) - (carry ? 1 : 0) < 0)
            carry = true;
        else
            carry = false;
        ++foo;
    }
    string str = ss.str();
    return string(str.rbegin(), str.rend());
}

string mul(string a, string b)
{
    if (a.size() < b.size() || (a.size() == b.size() && a[0] < b[0]))
        return mul(b, a);
    else if (a[0] == '-' ^ b[0] == '-')
        return "-" + mul(a, b);
    vector<string> v(10);
    string s = "0";
    for (int i = 0; i < 10; i++)
    {
        v[i] = s;
        s = add(s, a);
    }
    string sum = "0";
    for (string::reverse_iterator foo = b.rbegin(); foo < b.rend(); ++foo)
    {
        string s = v[ord(*foo)];
        for (int i = 0; i < foo - b.rbegin(); i++)
            s += "0";
        sum = add(sum, s);
    }
    return sum;
}
