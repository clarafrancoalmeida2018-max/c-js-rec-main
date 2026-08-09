#include <stdio.h>

int main() {
   float idade;

    printf("Digite sua idade: ");
    scanf("%99s", idade);

    if (idade < 18){
        printf("BLOQUEADO");

    }
    else{
        printf("PERMITIDO");
    }
    
    return 0;
}