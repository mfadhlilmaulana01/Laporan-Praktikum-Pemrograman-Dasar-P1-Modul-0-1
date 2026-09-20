#include <stdio.h>
#include <math.h>

int main() {
    int base_c = 5;
    int height_a = 12;

    int hypotenuse_b = (int)sqrt((double)(base_c * base_c) + (height_a * height_a));
    int circumference = hypotenuse_b + height_a + base_c;
    int area = (int)(0.5 * base_c * height_a);

    printf("Diketahui:\n");
    printf("Alas = %d cm\n", base_c);
    printf("Tinggi = %d cm\n", height_a);
    printf("\n");
    printf("Jawab:\n");
    printf("Sisi A = %d cm\n", hypotenuse_b);
    printf("Sisi B = %d cm\n", height_a);
    printf("Sisi C = %d cm\n", base_c);
    printf("Keliling = %d cm\n", circumference);
    printf("Luas = %d cm\n", area);

    return 0;
}