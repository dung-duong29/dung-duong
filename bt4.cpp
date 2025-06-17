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

    int le_cuoi = -1; 

    for(i = n - 1; i >= 0; i--) { 
        if(a[i] % 2 != 0) { 
            le_cuoi = a[i];
            break;
        }
    }

    if(le_cuoi == -1) {
        printf("Khong co so le trong mang.\n");
    } else {
        printf("So le cuoi cung trong mang la: %d\n", le_cuoi);
    }

    return 0;
}

