#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len, j = 0;
char line[101], reg[256];

int proc(int);
void mark(char);

int main(void)
{
    int i = 0;
    fgets(line, 101, stdin);
    len = strlen(line) - 1;
    while (i < len)
        i = proc(i);
    printf("%s\n", reg);
}

int proc(int i)
{
    if (i >= len)
        return len;
    int type = line[i] == '(' || line[i] == ')';
    if (type)
    {
        if (line[i] == ')')
        {
            mark('(');
            mark(')');
            return i + 1;
        }
        i++;
        mark('(');
        while (i < len && line[i] != ')')
            i = proc(i);
        mark(')');
        return i + 1;
    }
    else
    {
        if (line[i] == ']')
        {
            mark('[');
            mark(']');
            return i + 1;
        }
        i++;
        mark('[');
        while (i < len && line[i] != ']')
            i = proc(i);
        mark(']');
        return i + 1;
    }
}

void mark(char ch)
{
    reg[j++] = ch;
}
