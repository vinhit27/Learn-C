#include <stdio.h>
#include <math.h>

// nếu bạn muốn sàng các số nguyên tố không vượt quá n.
// phải tạo được 1arr có kích thước là n+1 phần tử
int prime[100001];

void sieve()
{
    // coi tat ca cac so tu 0 toi n la so nguyen tox
    // prime[i]=1 la so nguyen to
    // prime[i]=0 k la so nguyen to
    for (int i = 0; i <= 100000; i++)
        prime[i] = 1;
    // loai 0 va 1
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 10000; i++)
    {
        // neu i la so nguyen to+
        if (prime[i])
        {
            // duyet tat ca cac boi so cua i va cho cho no khong la so nguyen to
            for (int j = i * i; j <= 10000; j += i)
            {
                prime[j] = 0; // j khong con la so nguyen to
            }
        }
    }
}

float snt(int n)
{
    int cnt = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 2)
            return 0;
    }
    return n > 1;
}
int main(){
    sieve();
    int n;
    scanf("%d", &n);

    for (int i=2; i<=n; i++){
        if (prime[i]) 
            printf("%d ", i); // in ra 
    }
}