#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số có phải sphenic number không
int sphenic(int n)
{
    int res = 0; // đếm số lượng thừa số nguyên tố khác nhau của n
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            ++cnt; // đếm số lần chia hết cho i
            n /= i;
        }
        if (cnt >= 2)
            return 0; // nếu có số mũ >= 2 thì không phải sphenic
        if (cnt == 1)
            ++res; // đếm số lượng thừa số nguyên tố khác nhau
    }
    if (n != 1) // còn lại 1 số nguyên tố lớn hơn sqrt(n)
        ++res;
    return res == 3; // đúng nếu có đúng 3 thừa số nguyên tố khác nhau
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", sphenic(n));
    }
}
