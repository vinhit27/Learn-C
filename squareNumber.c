#include <stdio.h>
#include <math.h>

int niceNumber(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            ++cnt;
            n /= i;
        }
        if (cnt >= 2)
            return 1; // nếu có 1 thừa số nguyên tố xuất hiện >= 2 lần
    }
    return 0;
}

int niceNumber2(int n)
{
    int ok = 0; // check
    for (int i = 2; i <= sqrt(n); i++)
    {
        int count = 0;
        while (n % i == 0)
        {
            ++count;
            n /= i;
        }
        if (count == 1)
            return 0; // nếu có 1 thừa số nguyên tố xuất hiện đúng 1 lần thì loại
    }
    if (n != 1)
        ++ok;
    return ok;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (niceNumber2(i))
            printf("%d ", i);
    }
}
