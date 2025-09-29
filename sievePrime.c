#include <stdio.h>
#include <math.h>

int find(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return i; // trả về ước số nhỏ nhất khác 1
    }
    return n; // nếu không tìm thấy thì n là số nguyên tố → trả về chính n
}

int find2(int n)
{
    if (n == 1)
        return 1; // 1 đặc biệt
    if (n % 2 == 0)
        return 2; // nếu chia hết cho 2 thì trả về 2
    for (int i = 3; i <= n; i += 2)
    {
        if (n % i == 0)
            return i; // trả về ước số lẻ nhỏ nhất
    }
}

int prime[100001];

void sang()
{
    for (int i = 1; i <= 100000; i++)
    {
        prime[i] = i; // ban đầu gán prime[i] = i
    }
    for (int i = 2; i <= sqrt(100000); i++)
    {
        if (prime[i] == i)
        { // nếu i chưa bị gạch, tức là i là số nguyên tố
            for (int j = i * i; j <= 100000; j += i)
            {
                if (prime[j] == j) // nếu j chưa bị gạch
                    prime[j] = i;  // đánh dấu j bằng ước số nguyên tố nhỏ nhất
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d", prime[i]);
        }
        printf("\n");
    }
}
