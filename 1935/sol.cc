#include <iostream>
#include <stack>
#include <deque>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; n != 0; i++)
    {
        cout << "SET " << i << endl;
        stack<string> s;
        deque<string> d;
        string str;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            s.push(str);
        }
        if (n % 2 == 1)
        {
            d.push_back(s.top());
            s.pop();
        }
        while (!s.empty())
        {
            d.push_back(s.top());
            s.pop();
            d.push_front(s.top());
            s.pop();
        }
        for (int i = 0; i < d.size(); i++)
            cout << d[i] << endl;
        cin >> n;
    }
}
