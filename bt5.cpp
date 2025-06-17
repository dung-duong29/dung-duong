#include <stdio.h>

int main() {
    int n, i;
    int a[100]; 

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int min_duong = -1;

    for(i = 0; i < n; i++) {
        if(a[i] > 0) {
            if(min_duong == -1 || a[i] < min_duong) {
                min_duong = a[i];
            }
        }
    }

    if(min_duong == -1) {
        printf("Khong co so duong trong mang.\n");
    } else {
        printf("So duong nho nhat trong mang la: %d\n", min_duong);
    }

    return 0;
}

