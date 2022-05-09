#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
    int opValidator = 0;
    int calcValidatorInt = 0;

    /* variáveis operações genéricas */
    float num1 = 0, num2 = 0, num3 = 0;

    /* variáveis bhaskara */
    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, delta = 0;

    bool calcValidator = true;

    while (calcValidator == true){
        printf("\n1) adicao\n2) subtracao\n3) multiplicacao\n4) divisao\n5) exponenciacao\n6) bhaskara\n");
        printf("Digite o numero da opecao que voce deseja realizar: ");
        scanf("%d", &opValidator);

        switch (opValidator)
        {
            case 1:
                /* adição */
                printf("\nDigite o primeiro valor que voce deseja para sua adicao: ");
                scanf("%f", &num1);
                printf("\nDigite o segundo valor que voce deseja para sua adicao: ");
                scanf("%f", &num2);
                num3 = num2 + num1;
                printf("\nO resultado da sua soma e igual a: %f\n", num3);
                break;
            case 2:
                /* subtração */
                printf("\nDigite o primeiro valor que voce deseja para sua subtracao: ");
                scanf("%f", &num1);
                printf("\nDigite o segundo valor que voce deseja para sua subtracao: ");
                scanf("%f", &num2);
                num3 = num1 - num2;
                printf("\nO resultado da sua subtracao e igual a: %f\n", num3);
                break;
            case 3:
                /* multiplicação */
                printf("\nDigite o primeiro valor que voce deseja para sua multiplicacao: ");
                scanf("%f", &num1);
                printf("\nDigite o segundo valor que voce deseja para sua multiplicacao: ");
                scanf("%f", &num2);
                num3 = num2 * num1;
                printf("\nO resultado da sua multiplicacao e igual a: %f\n", num3);
                break;
            case 4:
                /* divisão */
                printf("\nDigite o primeiro valor que voce deseja para sua divisao: ");
                scanf("%f", &num1);
                printf("\nDigite o segundo valor que voce deseja para sua divisao: ");
                scanf("%f", &num2);
                num3 = num1 / num2;
                printf("\nO resultado da sua divisao e igual a: %f\n", num3);
                break;
            case 5:
                /* exponenciação */
                printf("\nDigite o valor da sua base para a exponeciacao: ");
                scanf("%f", &num1);
                printf("\nDigite o valor do seu expoente para a exponeciacao: ");
                scanf("%f", &num2);
                num3 = pow(num1, num2);
                printf("\nO resultado da sua exponenciacao e igual a: %f\n", num3);
                break;
            case 6:
                /* bhaskara */
                printf("\nDigite o valor do termo a: ");
                scanf("%f", &a);
                printf("\nDigite o valor do termo b: ");
                scanf("%f", &b);
                printf("\nDigite o valor do termo c: ");
                scanf("%f", &c);

                delta = b*b - 4*a*c;
                x1 = (-b + sqrt(delta)) / (2*a);
                x2 = (-b - sqrt(delta)) / (2*a);

                if(delta < 0) {
                    printf("\nA equacao nao possui raizes reais\n");
                } else {
                    printf("\nO valor de x1: %f", x1);
                    printf("\nO valor de x2: %f\n", x2);
                }
                break;

            default:
                printf("\nReabra o programa e escolha uma operacao valida\n");
                exit(0);
                break;
        }
        printf("Deseja realizar outra operacao: ( 1 para sim, 2 para nao ) ");
        scanf("%d", &calcValidatorInt);

        if (calcValidatorInt == 1){
        }
        else if (calcValidatorInt == 2){
            calcValidator = false;
        }
        else {
            printf("numero enviado invalido o programa sera encerrado\n");
        }
    }
}