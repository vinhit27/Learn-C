#include <stdio.h>
#include <math.h>

int count(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i += 5)
    {
        int tmp = i;
        while (tmp % 5 == 0)
        {
            ++res;
            tmp /= 5;
        }
    }
    return res;
}

int count2(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        res += n / i;
    }
    return res;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", count2(n)); // dungf count cung duoc, count2 toi uu hon.
    }
}
