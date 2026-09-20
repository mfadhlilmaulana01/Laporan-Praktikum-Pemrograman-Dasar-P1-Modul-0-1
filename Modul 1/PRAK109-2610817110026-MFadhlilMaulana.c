#include <stdio.h>

int main() {
    int army = 958730;
    int hero = 5;

    int equally = army / hero;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", army);
    printf("Jumlah pahlawan = %d\n", hero);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d\n", equally);

    return 0;
}