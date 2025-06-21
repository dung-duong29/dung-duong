#include <stdio.h>
#include <math.h>
#include "dung.h" 

int main() {
    int x, y;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &x, &y);

    int ketQua = ucln(x, y);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, ketQua);

    return 0;
}
