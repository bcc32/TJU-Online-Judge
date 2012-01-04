#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int atoi(string s);

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v.at(i);
        for (int i = 0; i < n; i++)
            sort(v.at(i).begin(), v.at(i).end());
        int max = atoi(v.at(0));
        for (int i = 1; i < n; i++)
            if (atoi(v.at(i)) > max)
                max = atoi(v.at(i));
        cout << max << endl;
    }
}

int atoi(string s)
{
    int n;
    istringstream ss(s);
    ss >> n;
    return n;
}
