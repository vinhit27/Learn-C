#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll Long Long

void halveTheDigits(char c[])
{
    int valid = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == '1')
            valid = 1;
        else if (!(c[i] == '0' || c[i] == '8' || c[i] == '9'))
        {
            valid = 0;
            break;
        }
    }
    if (!valid)
    {
        printf("INVALID\n");
        return;
    }
    valid = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == '1')
        {
            printf("1");
            valid = 1;
        }
        else if (valid != 0)
        {
            printf("0");
        }
    }
    printf("\n");
}

int main()
{
    int testCaseNUmber;
    scanf("%d", &testCaseNUmber);
    while (testCaseNUmber--)
    {
        char c[20];
        scanf("%s", c);
        halveTheDigits(c);
    }
}
