#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    map<char, char> m;
    m['W'] = 'Q'; m['S'] = 'A'; m['X'] = 'Z';
    m['E'] = 'W'; m['D'] = 'S'; m['C'] = 'X';
    m['R'] = 'E'; m['F'] = 'D'; m['V'] = 'C';
    m['T'] = 'R'; m['G'] = 'F'; m['B'] = 'V';
    m['Y'] = 'T'; m['H'] = 'G'; m['N'] = 'B';
    m['U'] = 'Y'; m['J'] = 'H'; m['M'] = 'N';
    m['I'] = 'U'; m['K'] = 'J'; m[','] = 'M';
    m['O'] = 'I'; m['L'] = 'K'; m['.'] = ',';
    m['P'] = 'O'; m[';'] = 'L'; m['/'] = '.';
    m['['] = 'P'; m['\''] = ';';
    m[']'] = '['; m['\\'] = ']';
    m['1'] = '`'; m['2'] = '1'; m['3'] = '2';
    m['4'] = '3'; m['5'] = '4'; m['6'] = '5';
    m['7'] = '6'; m['8'] = '7'; m['9'] = '8';
    m['0'] = '9'; m['-'] = '0'; m['='] = '-';
    for (char c = cin.get(); !cin.eof(); c = cin.get())
        cout << (m.find(c) != m.end() ? m[c] : c);
}
