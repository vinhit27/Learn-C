#include <stdio.h>
#include <string.h>
#include <math.h>

int squareNumber(long long n)
{
    long long can = sqrt(n) + 0.5; // làm tròn để tránh sai số
    if (1LL * can * can == n)      // nếu bình phương bằng chính nó
        return 1;                  // là số chính phương
    return 0;
}

int main()
{
    int testCaseNumbers;
    scanf("%d", &testCaseNumbers);
    while (testCaseNumbers--)
    {
        int a, b;
        scanf("%d%d", &a, &b);

        int c1 = sqrt(a), c2 = sqrt(b); // c1: căn a, c2: căn b

        // Nếu c1*c1 == a thì tăng thêm 1 để in đúng từ số chính phương đầu tiên
        if (c1 * c1 == a)
            ++c1;

        for (int i = c1; i <= c2; i++)
        {
            printf("%d ", i * i); // in ra bình phương
        }
        printf("\n");
    }
}
