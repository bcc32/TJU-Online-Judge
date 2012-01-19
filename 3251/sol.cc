#include <iostream>
using namespace std;

int main(void)
{
    string days[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", 
        "Monday", "Tuesday"};
    int d, m;
    cin >> d >> m;
    if (m >= 2) d += 31;
    if (m >= 3) d += 28;
    if (m >= 4) d += 31;
    if (m >= 5) d += 30;
    if (m >= 6) d += 31;
    if (m >= 7) d += 30;
    if (m >= 8) d += 31;
    if (m >= 9) d += 31;
    if (m >= 10) d += 30;
    if (m >= 11) d += 31;
    if (m >= 12) d += 30;
    cout << days[d % 7] << endl;
}
