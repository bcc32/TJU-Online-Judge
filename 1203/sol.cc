#include <iostream>
#include <vector>
using namespace std;

vector<long long> v;

void gen_prime(void);

int main(void)
{
    v.push_back(2);
    v.push_back(3);
    long long n;
    for (cin >> n; n != -1; cin >> n)
    {
        // long long orig = n;
        for (vector<long long>::iterator it = v.begin(); it < v.end(); ++it)
            if (n == 1)
                break;
            else while (n % *it == 0)
            {
                cout << "    " << *it << endl;
                n /= *it;
            }
        while (n > 1)
        {
            gen_prime();
            // if (v.back() * v.back() > orig)
            if (v.back() * v.back() > n)
                break;
            else while (n % v.back() == 0)
            {
                cout << "    " << v.back() << endl;
                n /= v.back();
            }
        }
        if (n > 1)
            cout << "    " << n << endl;
        cout << endl;
    }
}

void gen_prime(void)
{
    bool found = false;
    for (long long i = v.back() + 2; !found; i += 2)
    {
        bool failed = false;
        for (vector<long long>::iterator it = v.begin(); it < v.end(); ++it)
            if (i % *it == 0)
            {
                failed = true;
                break;
            }
        if (!failed)
        {
            v.push_back(i);
            found = true;
        }
    }
}
