#include <stdio.h>
#include <math.h>
#include <string.h>

// Hàm kiểm tra số đối xứng (palindrome)
int reversible(int n)
{
    int rev = 0, tmp = n;
    while (n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == tmp;
}

// Hàm kiểm tra xem có chứa số 6 và tổng chữ số chia hết cho 8
int check(int n)
{
    int condition = 0;
    int sum = 0;

    while (n)
    {
        int r = n % 10;
        sum += r;
        if (r == 6)
            condition = 1;
        n /= 10;
    }

    // điều kiện: có chữ số 6 và tổng chia hết cho 8
    if (condition && sum % 8 == 0)
        return 1;
    return 0;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int ok = 0;
    for (int i = a; i <= b; i++)
    {
        if (check(i) && reversible(i))
        {
            printf("%d ", i);
            ok = 1;
        }
    }

    if (!ok)
        printf("-1");
    return 0;
}
