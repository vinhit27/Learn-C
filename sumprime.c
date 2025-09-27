#include <stdio.h>
#include <math.h>

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


int main(){
    int t;
    scanf("%d",&t); 
    sang(0);
    while (t--){
        
        int n; 
        scanf("%d", &n);
        for (int i=2; i<=n/2; i++){
            if (prime[i] && prime[n-i]){
                printf("%d %d\n", i,n-i);
            }
        }
    }
}