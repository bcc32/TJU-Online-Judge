#include <iostream>
using namespace std;

int main(void)
{
    long long a, b;
    for (cin >> a >> b; a != 0 || b != 0; cin >> a >> b)
    {
        int c = 0;
        bool carry = false;
        while (a > 0 || b > 0)
        {
            if (a % 10 + b % 10 + (carry ? 1 : 0) > 9)
            {
                c++;
                carry = true;
            }
            else
                carry = false;
            a /= 10; 
            b /= 10;
        }
        if (c > 1)
            cout << c << " carry operations." << endl;
        else if (c == 1)
            cout << "1 carry operation." << endl;
        else
            cout << "No carry operation." << endl; 
    }
}
