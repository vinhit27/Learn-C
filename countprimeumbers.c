#include <stdio.h>
#include <math.h>

int prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;   // không phải nguyên tố
    }
    return n > 1;       // nguyên tố nếu n > 1
}

int digitPrime(int n) {
    while (n) {
        int r = n % 10; // lấy chữ số cuối
        if (r != 2 && r != 3 && r != 5 && r != 7)
            return 0;   // nếu chữ số không phải số nguyên tố
        n /= 10;        // bỏ chữ số cuối
    }
    return 1;           // tất cả chữ số đều là số nguyên tố
}
 
int main() {
    int t;
    scanf("%d", &t);  // số test case
    while (t--) {
        int a, b;
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for (int i = a; i <= b; i++) {
            if (prime(i) && digitPrime(i))
                ++cnt;   // đếm nếu vừa là số nguyên tố vừa có chữ số nguyên tố
        }
        printf("%d\n", cnt);
    }
}
