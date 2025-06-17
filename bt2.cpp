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

    int tong = 0;     
    int dem = 0;     

    // Duy?t m?ng ð? ki?m tra
    for(i = 0; i < n; i++) {
        if(i % 2 == 0 && a[i] % 2 != 0) { 
            tong += a[i];
            dem++;
        }
    }
  
    if(dem == 0) {
        printf("Khong co so le o vi tri chan trong mang.\n");
    } else {
        float tbc = (float)tong / dem;
        printf("Trung binh cong cac so le o vi tri chan la: %.2f\n", tbc);
    }

    return 0;
}

