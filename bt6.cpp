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

    int dem = 0;  
    int max_dem = 0; 

    for(i = 0; i < n; i++) {
        if(a[i] > 0) {
            dem++;
            if(dem > max_dem) {
                max_dem = dem;
            }
        } else {
            dem = 0; 
        }
    }

    if(max_dem == 0) {
        printf("Khong co so duong trong mang.\n");
    } else {
        printf("So luong so duong lien tiep nhieu nhat la: %d\n", max_dem);
    }

    return 0;
}

