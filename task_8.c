#include <stdio.h>
void two() {
    printf("два\n");
}

void one_three() {
    printf("один\n");
    two();
    printf("три\n");
}
int main() {
    printf("начинаем:\n");
    one_three();
    printf("порядок!\n");
    return 0;
}