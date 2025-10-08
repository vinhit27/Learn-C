#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int reversible(ll n);
int nearReversible(ll n);
int nearReversible1(char c[]);

int reversible(ll n)
{
    ll rev = 0, tmp = n;
    while (n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return tmp == rev;
}

int reversible1(ll n)
{
    int c = n % 10;
    n /= 10;

    ll rev = 0;
    while (n >= 10)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (!(n == 2 * c || c == 2 * n))
        return 0;

    return reversible(rev);
}

int solve(char c[])
{
    int d = c[0] - '0', cuoi = c[strlen(c) - 1] - '0';

    if (!(d != 2 * cuoi || cuoi == 2 * d))
        return 0;

    int l = 1, r = strlen(c) - 2;
    while (l < r)
    {
        if (c[l] != c[r])
            return 0;
        l++;
        r--;
    }

    return 1;
}

int main()
{
    int testCaseNumbers;
    scanf("%d", &testCaseNumbers);

    while (testCaseNumbers--)
    {
        ll c;
        scanf("%lld", &c);

        if (reversible(c))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
