#include <stdio.h>

int main(){
    double nota;
    printf("Inserir uma nota de (0-10): ");
    scanf("%lf",&nota);

    if (nota >= 9){
        printf("Conceito A\n");
    }
    else if (nota >= 7){
        printf("Conceito B\n");
    }
    else if (nota >= 5){
        printf("Conceito C\n");
    }
    else if (nota >= 3){
        printf("Conceito D\n");
    }
    else if (nota < 3){
        printf("Reprovado\n");
    }
    else{
        printf("Errou algo ai amigao");
    }
    return 0;
}