#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    /variaveis dos bits/
    int b0 = 0, b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0, b7 = 0;
    /variavel decimal/
    int decimal = 0;

    int typeValidator = 0;
    int saida = 0;
    bool active = true;
    int activeVal = 0;

    while (active == true){
        printf("\n1) decimal\n2) binario");
        printf("\nEscolha o tipo de valor que voce deseja converter: ");
        scanf("%d", &typeValidator);

        switch (typeValidator)
        {
        case 1:
            printf("\nDigite seu valor decimal: (valor maximo 255) ");
            scanf("%d", &decimal);
            printf("\nSeu valor em hexadecimal: %08x", decimal);
            printf("\nSeu valor em octal: %o", decimal);

            for(int i = 0; decimal >= 1; i++){
                bits[i] = decimal %2;
                decimal = decimal /2;
            }
            printf("\nSeu valor em binario ficou: ");
            for(int i = 7; i >= 0; i--){
                printf("%d", bits[i]);
            }
            
            break;
        case 2:
            printf("\nDigite seu primeiro bit: ");
            scanf("%d", &b0);
            printf("\nDigite seu segundo bit: ");
            scanf("%d", &b1);
            printf("\nDigite seu terceiro bit: ");
            scanf("%d", &b2);
            printf("\nDigite seu quarto bit: ");
            scanf("%d", &b3);
            printf("\nDigite seu quinto bit: ");
            scanf("%d", &b4);
            printf("\nDigite seu sexto bit: ");
            scanf("%d", &b5);
            printf("\nDigite seu setimo bit: ");
            scanf("%d", &b6);
            printf("\nDigite seu oitavo bit: ");
            scanf("%d", &b7);
            saida = b0*1 + b2*2 + b3*4 + b4*8 + b5*16 + b6*32 + b7*64;
            printf("\nSeu valor em decimal: %d", saida);
            printf("\nSeu valor em hexadecimal: %08x", saida);
            printf("\nSeu valor em octal: %o", saida);
            break;
        default:
            printf("\nVoce inseriu um valor invalido, o programa sera encerrado...");
            exit(0);
            break;
        }
        printf("\nVoce deseja converter outro numero? ( 1 para sim, 2 para nao ) ");
        scanf("%d", &activeVal);
        if (activeVal == 1){
            // roda nada
        }
        else if (activeVal == 2){
            active = false;
        }
        else {
            printf("\nO valor inserido e invalido, o programa sera encerrado...");
        }
    }
    return  0;
}