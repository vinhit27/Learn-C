#include <stdio.h>
#include <math.h>


//ktra 1 so co phai la so chua chu so 6, va tong chu so chia het cho 8

//ktra so co chua chu so 6
int check1( int n){
    while (n){
        if (n%10==6) return 1;
        n/=10;
    }
    return 0;
}

//tinh tong chu so trong n co chia het cho 8 hay khong 
int check2(int n){
    int sum=0;
    while (n){
        sum+=n%10;
        n/=10;
    }
    return sum%8==0;
}

//su dung 2 ham ket hop
int main(){
    int n;
    scanf("%d",&n);
    if (check1(n) && check2(n)) printf("YES");
    else printf("NO");
    return 0;
}