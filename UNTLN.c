#include <stdio.h>
#include <math.h>

int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

int find(int n)
{
    for (int i = n; i >= 1; i--)
    {                            // duyệt ngược từ n về 1
        if (n % i == 0 && nt(i)) // nếu i vừa là ước của n vừa là số nguyên tố
            return i;            // trả về ngay i (vì là lớn nhất do duyệt từ trên xuống)
    }
}

int main()
{
    int testCaseNumber;
    scanf("%d", &testCaseNumber); 
    for (int i = 1; i <= testCaseNumber; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", find(n)); // in ra thừa số nguyên tố lớn nhất của n
    }
}
