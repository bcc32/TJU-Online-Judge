#include <iostream>
#include <vector>
using namespace std;

int sim(string m, vector<string> f)
{
    int c = 0;
    for (int i = 0; i < m.size(); i++)
        for (int j = 0; j < f.size(); j++)
        {
            char ch = f.at(j)[i];
            if (m[i] == ch) c++;
            else if ((m[i] == 'S' && ch == 'P') || 
                (m[i] == 'P' && ch == 'R') || (m[i] == 'R' && ch == 'S'))
                c += 2;
        }
    return c;
}

int max(vector<string> f)
{
    int c = 0;
    for (int i = 0; i < f.at(0).size(); i++)
    {
        int max = 0;
        int count = 0;
        for (int j = 0; j < f.size(); j++)
            if (f.at(j)[i] == 'P')
                count++;
            else if (f.at(j)[i] == 'R')
                count += 2;
        if (count > max)
            max = count;
        count = 0;
        for (int j = 0; j < f.size(); j++)
            if (f.at(j)[i] == 'R')
                count++;
            else if (f.at(j)[i] == 'S')
                count += 2;
        if (count > max)
            max = count;
        count = 0;
        for (int j = 0; j < f.size(); j++)
            if (f.at(j)[i] == 'S')
                count++;
            else if (f.at(j)[i] == 'P')
                count += 2;
        if (count > max)
            max = count;
        c += max;
    }
    return c;
}

int main(void)
{
    int n;
    cin >> n;
    cin.get(); // flush
    string m;
    cin >> m;
    cin >> n;
    vector<string> f(n);
    cin.get();
    for (int i = 0; i < n; i++)
        cin >> f.at(i);
    cout << sim(m, f) << endl;
    cout << max(f) << endl;
}
