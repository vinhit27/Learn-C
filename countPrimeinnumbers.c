#include <stdio.h>
#include <math.h>

int count(int n)
{
    int res = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ++res; // gặp 1 thừa số nguyên tố mới → tăng biến đếm
            while (n % i == 0)
            { // chia hết thì chia liên tục
                n /= i;
            }
        }
    }
    if (n != 1) // nếu còn lại một số nguyên tố lớn hơn sqrt(n)
        ++res;
    return res;
}

int main()
{
    int t;
    scanf("%d", &t); // số lượng test case
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);          // nhập số n
        printf("%d\n", count(n)); // in số lượng thừa số nguyên tố khác nhau
    }
}
