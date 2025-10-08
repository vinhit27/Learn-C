#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

void delete(char c[])
{
    for (int i = 0; i < strlen(c) - 2; i++)
    {
        if (c[i] == '0' && c[i + 1] == '8' && c[i + 2] == '4')
        {
            c[i] = c[i + 1] = c[i + 2] = 'x';
        }
    }

    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] != 'x')
            printf("%c", c[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char c[20];
        scanf("%s", c);
        solve(c);
    }
}
