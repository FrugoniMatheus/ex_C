#include <stdio.h>

int main(){
    double n1 , n2;
    char op;

    printf("Informe o primeiro numero: ");
    scanf("%ld", &n1);


    printf("Informe o segundo numero: ");
    scanf("%ld", &n2);

    printf("Qual operacao deseja fazer [ + , - , / , * ]");
    scanf("%c", &op);

    if (op = "+"){
        printf("A soma e: \n", n1 + n2 );
    }
    else if (op = "-"){
        printf("A subtracao e: \n", n1 - n2 );
    }
    else if (op = "/"){
        printf("A divisao e: \n", n1 / n2 );
    }
    else if (op = "*")
    {
        printf("A multiplicacao e: \n", n1 * n2 );
    }
    else{
        printf("Errou algo ai amigao");
    }
    
}