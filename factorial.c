#include <stdio.h>
#include <math.h>

long long factorization(long long n, long long p)
{
    long long res = 0;
    while (n > 0)
    {
        n /= p;
        res += n;
    }
    return res;
}
int main()
{
    int t;
    scanf("%d", &t);
    if (t == 1)
        return 0;
    while (t--)
    {
        long long n, p;
        scanf("%lld%lld", &n, &p);
        printf("%lld\n", factorization(n, p));
    }
}
