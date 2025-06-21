int tinhTongChuSo(int n) {
    if (n < 0) n = -n;

    int tong = 0;
    while (n > 0) {
        tong += n % 10; 
        n /= 10;       
	}
return tong;
}



int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
	

