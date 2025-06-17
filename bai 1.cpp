 #include <stdio.h>

int main() {
    int n, i;
    int a[100]; // Gi? s? m?ng t?i ða 100 ph?n t?
    int tong = 0, dem = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            tong += a[i];
            dem++;
        }
    }

 
    if (dem == 0) {
        printf("Khong co so le trong mang.\n");
    } else {
        float tbc = (float)tong / dem;
        printf("Trung binh cong cac so le trong mang la: %.2f\n", tbc);
    }

    return 0;
}

