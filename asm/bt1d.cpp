#include <stdio.h>
#include <math.h>
#include "dung.h"

int main(){
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int tong = tinhTongChuSo(n);
    printf("Tong cac chu so cua %d la: %d\n", n, tong);
}

 

