#include <stdio.h>

void br() {
    printf("Бразилия, Россия");
}

void ic() {
    printf("Индия, Китай");
}

int main() {
    br(); printf(", "); ic();
    printf("\n"); ic();
    printf("\n"); br(); printf("\n");
    return 0;
}