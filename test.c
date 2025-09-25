//số nguyên int: 4 byte và long long: 8 byte
// unsiged int hoặc unsiged long long: kiểu nguyên không dấu 
// 4byte = 32bit
//số thực float 4byte và double 8byte
// kiểu kí tự char 1byte
//int: %d
//long long: %lld
//float: %f
//double:%lf
//char: %c
// xuống dòng: printf("%d\n")
// scanf(""): nhập gtri vào 
//&& là và      || là hoặc      ! là không
//A-Z:65-90
//a-z:97-122
//0-9:48-57
//goto là nhãn, ưu tiên thực hiện nhãn trước. 

#include <stdio.h> // Bao gồm thư viện đầu vào/đầu ra chuẩn

int main() { // Hàm chính, điểm bắt đầu của chương trình
    printf("Hello world\n"); // In dòng chữ "Xin chào, thế giới!" ra màn hình
    int a;
    scanf("%d", &a);
    
    printf(" gia tri cua a la: %d",a);
    return 0; // Trả về 0 để chỉ chương trình kết thúc thành công
}