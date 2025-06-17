#include <stdio.h>

int main() {
    int n, i, x;
    int a[100]; 

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap so x can tim: ");
    scanf("%d", &x);

    int tim_thay = 0; 

    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            tim_thay = 1; 
            break;        
        }
    }

    if(tim_thay == 1) {
        printf("Tim thay %d trong mang.\n", x);
    } else {
        printf("%d khong co trong mang.\n", x);
    }

    return 0;
}

