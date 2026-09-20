#include <stdio.h>

int main() {
    int range_circle = 14;
    int round = 5;
    double circumference = (double)range_circle / round;
    double r = circumference / (2 * 3.14);

    printf("Pak Dengklek mengelilingi taman = %d putaran\n", round);
    printf("Jarak tempuh Pak Dengklek = %d kilometer\n", range_circle);
    printf("\n");
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer\n", r);

    return 0;
}