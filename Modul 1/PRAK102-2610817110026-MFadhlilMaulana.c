#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    double hasil = (double)(a * b) / c;

    printf("Variabel a = %d\n", a);
    printf("Variabel b = %d\n", b);
    printf("Variabel c = %d\n", c);
    printf("Hasil dari a kali b dibagi c adalah %.6f\n", hasil);

    return 0;
}