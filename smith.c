#include <stdio.h>
#include <math.h>

int sum(int n)
{
    int ans = 0;
    while (n)
    {
        ans += n % 10; // lấy chữ số cuối cùng cộng dồn
        n /= 10;       // bỏ chữ số cuối
    }
    return ans;
}

int smith(int n)
{
    int sum1 = sum(n); // tổng chữ số của n
    int sum2 = 0;      // tổng chữ số của các thừa số nguyên tố
    int tmp = n;

    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            sum2 += sum(i); // cộng tổng chữ số của thừa số nguyên tố i
            n /= i;         // chia n cho i
        }
    }
    if (n != 1)
        sum2 += sum(n); // nếu còn lại 1 số nguyên tố lớn hơn sqrt(n)

    if (tmp == n)
        return 0; // nếu n là số nguyên tố → không phải Smith number

    return sum1 == sum2; // kiểm tra điều kiện Smith number
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        if (smith(n))
        {
            printf("YES");
        }
        else
            printf("NO");
    }
}
