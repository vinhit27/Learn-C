#include <stdio.h>

void bai1()
{
    int n, a[100];
    printf("so luong phan tu:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void bai2()
{
    int a[6];
    int sum = 0, average;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
        average = sum / 6;
    }
    printf("tong phan tu: %d ", sum);
    printf("trung binh cong: %d", average);
}

void bai3()
{
    int a[7];
    int max, min;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 1; i < 7; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf(" gia tri lon nhat: %d\n", max);
    printf(" gia tri nho nhat: %d", min);
}

void bai4()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("phan tu %d la:", i);
        scanf("%d", &a[i]);
    }
    int dem1 = 0;
    int dem2 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
            ++dem1;
        else
            ++dem2;
    }
    printf("%d chan", dem1);
    printf("%d le", dem2);
}




void bai5()
{
    int a[7];
    int dem = 0;
    for (int i = 0; i < 7; i++)
    {
        printf("phan tu %d la:", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        int count = 0;
        for (int j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                ++dem;
                continue;
            }
        }
    }
    printf("%d so nguyen to", dem);
}

int main()
{
    bai5();
}
