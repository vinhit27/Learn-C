#include <stdio.h>
#include <string.h>
#include <math.h>

int tn(int n)
{
    int rev = 0, tmp = n;
    while (n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == tmp;
}

int chua9(int n)
{
    while (n != 0)
    {
        if (n % 10 == 9)
            return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (chua9(i) && tn(i))
        {
            printf("%d ", i);
            ++cnt;
        }
    }
    printf("\n%d\n", cnt);
    return 0;
}
