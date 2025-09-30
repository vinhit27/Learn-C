#include <stdio.h>
#include <math.h>

void analysis1(int n)
{
    {
        for (int i = 2; i <= sqrt(n); i++)
        { // duyệt từ 2 đến sqrt(n)
            if (n % i == 0)
            {                     // nếu i chia hết cho n
                printf("%d ", i); // in ra thừa số nguyên tố i
                while (n % i == 0)
                { // chia liên tục cho i
                    n /= i;
                }
            }
        }
        if (n != 1) // nếu còn lại số > 1 (nguyên tố lớn)
            printf("%d", n);
    }
}

void analysis2(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            { // đếm số lần i chia hết cho n
                ++cnt;
                n /= i;
            }
            printf("%d(%d) ", i, cnt); // in ra thừa số và số mũ
        }
    }
    if (n != 1)             // nếu còn lại số > 1
        printf("%d(1)", n); // số nguyên tố cuối cùng có số mũ 1
}

void pt3(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {                    // nếu i chia hết cho n
            printf("%d", i); // in ra thừa số nguyên tố
            n /= i;          // giảm n
            if (n != 1)
                printf("x"); // nếu n chưa chia hết -> in thêm dấu "x"
        }
    }
    if (n != 1) // nếu còn lại 1 số nguyên tố lớn hơn sqrt(n)
        printf("%d", n);
}

int main()
{
    int n;
    scanf("%d", &n);
}
