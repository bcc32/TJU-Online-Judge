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
            cin >> v[i];
        for (int i = 0; i < n; i++)
            sort(v[i].begin(), v[i].end());
        int max = atoi(v[0]);
        for (int i = 1; i < n; i++)
            if (atoi(v[i]) > max)
                max = atoi(v[i]);
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
