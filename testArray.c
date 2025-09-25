#include <stdio.h> // Bao gồm thư viện chuẩn để dùng hàm nhập xuất

int main() {
    // Khai báo mảng và các biến cần thiết
    int arr[100]; // Mảng có thể chứa tối đa 100 phần tử
    int n, i;
    int max, min;

    // Yêu cầu người dùng nhập kích thước của mảng
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n); // Đọc số lượng phần tử từ bàn phím

    printf("Nhap cac phan tu cua mang:\n");
    // Nhập các phần tử của mảng
    for (i = 0; i < n; i++) {
        printf("Phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]); // Đọc từng phần tử từ bàn phím
    }

    // Khởi tạo giá trị lớn nhất và nhỏ nhất bằng phần tử đầu tiên của mảng
    max = arr[0];
    min = arr[0];

    // Duyệt qua mảng từ phần tử thứ hai để tìm giá trị lớn nhất và nhỏ nhất
    for (i = 1; i < n; i++) {
        // Nếu phần tử hiện tại lớn hơn max, cập nhật max
        if (arr[i] > max) {
            max = arr[i];
        }
        // Nếu phần tử hiện tại nhỏ hơn min, cập nhật min
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // In kết quả ra màn hình
    printf("\nGia tri lon nhat trong mang la: %d\n", max);
    printf("Gia tri nho nhat trong mang la: %d\n", min);

    return 0; // Kết thúc chương trình
}
