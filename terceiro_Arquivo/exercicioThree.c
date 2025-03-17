#include <stdio.h>

int main(){
    double n1 , n2;
    char op;

    printf("Informe o primeiro numero: ");
    scanf("%lf", &n1);


    printf("Informe o segundo numero: ");
    scanf("%lf", &n2);

    printf("Qual operacao deseja fazer [ + , - , / , * ]: ");
    scanf(" %c", &op);

    if (op == '+'){
        printf("A soma e: %.0lf\n", n1 + n2 );
    }
    else if (op == '-'){
        printf("A subtracao e: %.0lf\n", n1 - n2 );
    }
    else if (op == '/'){
        printf("A divisao e: %.2lf\n", n1 / n2 );
    }
    else if (op == '*')
    {
        double multi = (n1 * n2);
        printf("A multiplicacao e: %.0lf\n", multi);
    }
    else{
        printf("Errou algo ai amigao");
    }
    
}