#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int *v = (int *) malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int max = 0;
        for (int i = 0; i < n; i++)
            for (int j = 1; i + j <= n; j++)
            {
                int s = 0;
                for (int k = 0; k < j; k++)
                    if 
                    s += v[i + k];
                if (s > max)
                    max = s;
            }
        if (max == 0)
            cout << "Losing streak." << endl;
        else
            cout << "The maximum winning streak is " << max << "." << endl;
        free(v);
    }
}
