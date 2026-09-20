#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    bool sama_ndak = (a == b);
    bool lebih_besar = (b > c);
    bool tidak_sama = (a != c);

    printf("Apakah a sama dengan b? %d\n", sama_ndak);
    printf("Apakah b lebih besar dari c? %d\n", lebih_besar);
    printf("Apakah a tidak sama dengan c? %d\n", tidak_sama);

    return 0;
}