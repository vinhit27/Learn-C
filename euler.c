#include <stdio.h>
#include <string.h>
#include <math.h>

long long elementsTogether(long long a, long long b)
{
    if (b == 0)
        return a;
    return elementsTogether(b, a % b);
}

int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if (elementsTogether(a, b) == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
