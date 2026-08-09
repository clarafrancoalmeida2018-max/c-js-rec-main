#include <stdio.h>

int main() {
    float lado1, lado2, area;

    printf("Digite o lado 1: ");
    scanf("%f", &lado1);

    printf("Digite o lado 2: ");
    scanf("%f", &lado2);

    area = lado1 * lado2;

    printf("Area = %.2f\n", area);

    return 0;
}