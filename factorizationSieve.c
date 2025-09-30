#include <stdio.h>
#include <math.h>

int prime[10001];

void sieve()
{
    for (int i = 1; i <= 10000; i++)
    {
        prime[i] = i;
    }
    for (int i = 2; i <= sqrt(10000); i++)
    {
        if (prime[i] == i)
        {
            for (int j = i * i; j <= 10000; j += i)
            {
                if (prime[j] == j)
                {                 // chưa bị gán
                    prime[j] = i; // gán ước số nguyên tố nhỏ nhất
                }
            }
        }
    }
}

void factorization(int n)
{
    while (n != 1)
    {
        int count = 0;
        int tmp = prime[n];
        while (n % tmp == 0)
        {
            ++count;
            n /= tmp;
        }
        printf("%d(%d)", tmp, count);
    }
    printf("\n");
}

int main()
{
    sieve();
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        printf("#TC%d:", i);
        factorization(n);
    }
    return 0;
}
