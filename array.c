#include <stdio.h>

//dataType: kieu du lieu cua cac phan tu trong mang do 
//ArrayName: tu dat

int main(){
    //dataType ArrayName[sizeOfArray];
    int a[4]; //Khai bao 1 mang so nguyen co toi da 100 phan tu
    for (int i=0; i<4; i++){
        printf("Nhap gia tri cho phan tu %d :",i+1);
        scanf("%d", &a[i]);
    }
    for (int i=0;i<4;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for (int i=3; i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}
