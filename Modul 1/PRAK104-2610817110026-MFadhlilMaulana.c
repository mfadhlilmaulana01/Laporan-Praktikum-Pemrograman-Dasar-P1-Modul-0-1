#include <stdio.h>

int main() {
    int sepatu_A = 400000;
    int sepatu_B = 350000;

    printf("Harga sepatu A adalah %d\n", sepatu_A);
    printf("Harga sepatu B adalah %d\n", sepatu_B);

    int diskon_A = (int)(sepatu_A - (sepatu_A * 13 / 100.0));
    int diskon_B = (int)(sepatu_B - (sepatu_B * 21 / 100.0));

    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", diskon_A);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", diskon_B);

    return 0;
}