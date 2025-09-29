#include <stdio.h>
#include <math.h>

int prime[1000001];

void sieve()
{
    for (int i = 1; i <= 1000000; i++)
        prime[i] = 1;        // giả sử tất cả là số nguyên tố
    prime[0] = prime[1] = 0; // 0 và 1 không phải số nguyên tố

    for (int i = 2; i <= 1000; i++)
    { // chỉ cần đến sqrt(10^6) = 1000
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i) // loại bỏ bội số của i
                prime[j] = 0;
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t); // số test case
    sieve();         // khởi tạo mảng nguyên tố

    while (t--)
    {
        long long a, b;
        scanf("%lld%lld", &a, &b);

        int cnt = 0;
        for (int i = sqrt(a); i <= sqrt(b); i++)
        {                 // duyệt từ sqrt(l) đến sqrt(r)
            if (prime[i]) // nếu i là số nguyên tố
                ++cnt;    // tăng biến đếm
        }
        printf("%d\n", cnt); // in kết quả
    }
    return 0;
}
