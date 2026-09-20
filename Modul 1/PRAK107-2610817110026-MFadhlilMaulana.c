#include <stdio.h>

int main() {
    int a = 4;
    int b = 5;
    int c = 7;
    long long permeter = 85000;

    int circumference = a + b + c;
    long long fee = (long long)circumference * permeter;

    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling tanah Pak Dengklek adalah %d\n", circumference);
    printf("Harga tanah permeter adalah %lld\n", permeter);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %lld\n", fee);

    return 0;
}