#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int testCaseNumber;
    scanf("%d", &testCaseNumber);
    while (testCaseNumber--)
    {
        int a, b;
        scanf("%d%d", &a, &b);

        int c1 = sqrt(a), c2 = sqrt(b);

        // Nếu c1*c1 == a thì c1 chính là số chính phương đầu tiên
        if (c1 * c1 == a)
            ++c1;

        // Số lượng số chính phương trong đoạn [a, b]
        printf("%d\n", c2 - c1 + 1);
    }
}
