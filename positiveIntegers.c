#include <stdio.h>
#include <string.h>
#include <math.h>

#define ll long long

ll leastCommonMultiple(int n, int x, int y, int z)
{
    for (ll i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if (i % x == 0 && i % y == 0 && i % z == 0)
            return i;
    }
    return -1;
}

int main()
{
    int x, y, z, n;
    scanf("%d%d%d%d", &x, &y, &z, &n);
    printf("%lld", leastCommonMultiple(n, x, y, z));
    return 0;
}
