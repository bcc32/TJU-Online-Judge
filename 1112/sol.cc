#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> v;
    string s;
    int max = 0;
    for (cin >> s; s != "0"; cin >> s)
    {
        if (s.size() > max)
            max = s.size();
        reverse(s.begin(), s.end());
        v.push_back(s);
    }
    string sum;
    int carry = 0;
    for (int i = 0; i < max; i++)
    {
        int x = carry;
        for (int j = 0; j < v.size(); j++)
            if (i < v[j].size())
                x += (int)v[j][i] - (int)'0';
        carry = x / 10;
        sum += (char)(x % 10) + '0';
    }
    while (carry > 0)
    {
        sum += (char)(carry % 10) + '0';
        carry /= 10;
    }
    reverse(sum.begin(), sum.end());
    cout << sum << endl;
}
