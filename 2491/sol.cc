#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(void)
{
    string s;
    for (getline(cin, s); s != "."; getline(cin, s))
    {
        stringstream ss(stringstream::in | stringstream::out);
        ss << s;
        string w;
        ss >> w;
        int n;
        ss >> n;
        for (int i = 0; i < n; i++)
            cout << w;
        cout << endl;
        for (int i = 1; i < w.size(); i++)
        {
            rotate(w.begin(), w.begin() + 1, w.end());
            for (int j = 0; j < n; j++)
                cout << w;
            cout << endl;
        }
    }
}
