#include <iostream>
#include <vector>
using namespace std;

bool test(vector< vector<int> > v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int s = 0;
        for (int j = 0; j < v.at(i).size(); j++)
            s += v.at(i).at(j);
        if (s % 2 == 1)
            return false;
    }
    for (int j = 0; j < v.at(0).size(); j++)
    {
        int s = 0;
        for (int i = 0; i < v.size(); i++)
            s += v.at(i).at(j);
        if (s % 2 == 1)
            return false;
    }
    return true;
}

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        vector< vector<int> > v(n);
        for (int i = 0; i < n; i++)
        {
            v.at(i).resize(n);
            for (int j = 0; j < n; j++)
                cin >> v.at(i).at(j);
        }
        if (test(v))
        {
            cout << "OK" << endl;
            continue;
        }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (found)
                break;
            for (int j = 0; j < n; j++)
            {
                v.at(i).at(j) = !v.at(i).at(j);
                if (test(v))
                {
                    cout << "Change bit (" << i + 1 << "," << j + 1 << ")"
                        << endl;
                    found = true;
                    break;
                }
                v.at(i).at(j) = !v.at(i).at(j);
            }
        }
        if (!found)
            cout << "Corrupt" << endl;
    }
}
