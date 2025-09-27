#include <stdio.h>
#include <math.h>


int prime[1000001];

void sang() {
    for (int i = 0; i <= 1000000; i++)
        prime[i] = 1;    // ban đầu giả sử tất cả là số nguyên tố

    prime[0] = prime[1] = 0; // 0 và 1 không phải số nguyên tố

    for (int i = 2; i * i <= 1000000; i++) {   // chỉ cần duyệt tới căn bậc 2
        if (prime[i]) { // nếu i là số nguyên tố
            for (int j = i * i; j <= 1000000; j += i)
                prime[j] = 0;  // các bội số của i không phải số nguyên tố
        }
    }
}
int main() {
    sang();   // tiền xử lý, đánh dấu tất cả số nguyên tố
    int t;
    printf("so luong testcase: ");
    scanf("%d", &t);  // nhập số lượng test case

    while (t--) {
        int n;
        scanf("%d", &n);
        if (prime[n])
            printf("YES\n");
        else
            printf("NO\n");
    }
}

