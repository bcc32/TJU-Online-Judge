#include <cstdio>
#include <sstream>
#define ord(ch) ((int)(ch - '0'))
#define next(n) ((n) == 9 ? 3 : (n) == 3 ? 7 : 9)
using namespace std;

string repl(string, int);
bool test(string);

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char *temp;
        scanf("%s", temp);
        string str(temp);
        int ans = -1;
        for (int j = 0; j < 10; j++)
            if (test(repl(str, j)))
            {
                ans = j;
                break;
            }
        printf("Scenario #%d:\n", i + 1);
        printf("%s\n\n", repl(str, ans).c_str());
    }
}

string repl(string str, int n)
{
    ostringstream ss;
    for (int i = 0; i < str.size(); i++)
        if (str[i] == '?')
            ss << n;
        else
            ss << str[i];
    return ss.str();
}

bool test(string str)
{
    int foo = 9, sum = 0;
    for (string::reverse_iterator it = str.rbegin(); it < str.rend(); ++it)
    {
        sum = (sum + ord(*it) * foo) % 10;
        foo = next(foo);
    }
    return sum == 0;
}
