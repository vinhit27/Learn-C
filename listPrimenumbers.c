#include <stdio.h>
#include <math.h>

int prime1(int n){
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0)
            return 0;
    }
    return n>1;
}

int prime[10001];
void sang() {
    for (int i = 0; i <= 10000; i++)
        prime[i] = 1;    // ban đầu giả sử tất cả là số nguyên tố

    prime[0] = prime[1] = 0; // 0 và 1 không phải số nguyên tố

    for (int i = 2; i * i <= 100; i++) {   // chỉ cần duyệt tới căn bậc 2
        if (prime[i]) { // nếu i là số nguyên tố
            for (int j = i * i; j <= 10000; j += i)
                prime[j] = 0;  // các bội số của i không phải số nguyên tố
        }
    }
}


int main() {
    int n;
    scanf("%d", &n);      // nhập số lượng số nguyên tố cần in
    sang();
    int i = 0, cnt = 0;   // i: số đang xét, cnt: đếm số nguyên tố đã tìm
    while (cnt < n) {     // lặp đến khi đủ n số nguyên tố
        if (prime[i]) {
            printf("%d\n", i);  // nếu i là số nguyên tố thì in ra
            ++cnt;              // tăng biến đếm
        }
        ++i;    // xét số tiếp theo
    }
}
