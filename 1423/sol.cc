#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    int n;
    vector<int> l, h;
    for (cin >> n; n != 0; cin >> n)
    {
        string str;
        cin.ignore(1, '\n');
        getline(cin, str);
        if (str == "too high")
            h.push_back(n);
        else if (str == "too low")
            l.push_back(n);
        else if (str == "right on")
        {
            bool hon = true;
            for (int i = 0; i < l.size(); i++)
                if (l[i] >= n)
                    hon = false;
            for (int i = 0; i < h.size(); i++)
                if (h[i] <= n)
                    hon = false;
            if (!hon)
                cout << "Stan is dishonest" << endl;
            else
                cout << "Stan may be honest" << endl;
            l.clear();
            h.clear();
        }
    }
}
