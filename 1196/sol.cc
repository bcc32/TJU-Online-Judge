#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
    string u = "http://www.acm.org/";
    stack<string> b, f;
    string cmd;
    for (cin >> cmd; cmd != "QUIT"; cin >> cmd)
    {
        if (cmd == "VISIT")
        {
            cin.ignore(1, ' ');
            string url;
            getline(cin, url);
            b.push(u);
            u = url;
            while (!f.empty())
                f.pop();
        }
        else if (cmd == "BACK")
        {
            if (b.empty())
            {
                cout << "Ignored" << endl;
                continue;
            }
            f.push(u);
            u = b.top();
            b.pop();
        }
        else if (cmd == "FORWARD")
        {
            if (f.empty())
            {
                cout << "Ignored" << endl;
                continue;
            }
            b.push(u);
            u = f.top();
            f.pop();
        }
        cout << u << endl;
    }
}
