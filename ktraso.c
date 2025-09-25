#include <stdio.h>
#include <math.h>




//nhap so luong phan tu cua array
int main(){
    // dataType ArrayName[sizeOfArray];
    // a[index]

    int n;
    printf("Nhap so luong phan tu cua mang : ");
    scanf("%d", &n);

    int a[n]; // Khai báo mảng có n phần tử (

    // Nhập giá trị cho mảng
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // In ra giá trị của mảng
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
