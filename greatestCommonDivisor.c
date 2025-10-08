#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

ll greatestCommonDivisor(ll a, ll b)
{
    while (b != 0)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll greatestCommonDivisor1(ll a, ll b)
{
    if (b == 0)
        return a;
    return greatestCommonDivisor(b, a % b);
}

ll lcm(ll a, ll b)
{
    return a / greatestCommonDivisor(a, b) * b;
}

int main()
{
    ll a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld %lld", greatestCommonDivisor(a, b), lcm(a, b));
}
