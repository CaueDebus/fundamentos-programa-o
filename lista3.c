#include <stdio.h>
#include <stdbool.h>

/* https://prnt.sc/t0I7YCEnelmL */

void three(int h)
{
    /* ************ gerando arvore ************ */

    int blankSpaces = 0;
    int stars = 0;

    blankSpaces = h - 1;

    while(blankSpaces >= 0)
    {   
        for(int i = 1; i <= blankSpaces; i++)
        {
            printf(" ");
        }

        for(int i = 1; i <= stars; i++)
        {
            printf("*");
        }

        printf("|");

        for(int i = 1; i <= stars; i++)
        {
            printf("*");
        }

        for(int i = 1; i <= blankSpaces; i++)
        {
            printf(" ");
        }

        printf("\n");
        blankSpaces = blankSpaces - 1;
        stars = stars + 1;
    }
    /* ************ ************** ************ */
}

void square(int h)
{
    /* ************ gerando quadrado ************ */

    for(int i = 1; i<= h; i++)
    {
        printf("* ");
    }
    printf("\n");
    for(int i = 2; i < h; i++)
    {
        printf("* ");
        for(int j = 2; j < h; j++)
        {
            printf("  ");
        }
        printf("*\n");
    }
    for(int i = 1; i<= h; i++)
    {
        printf("* ");
    }

    /* ************ **************** ************ */
}

int main(){
    bool active = true;
    int activeVal = 0;
    int figureType = 0;
    int size = 0;

    while(active == true){
        printf("\n1) quadrado\n2) arvore\nDigite o numero da figura que voce deseja gerar: ");
        scanf("%d", &figureType);

        switch (figureType)
        {
        case 1:
            printf("\ndigite o valor em unidades * dos lados do seu quadrado: ");
            scanf("%d", &size);
            square(size);
            break;
        case 2:
            printf("\ndigite a altura que voce deseja para sua arvore: ");
            scanf("%d", &size);
            three(size);
            break;
        default:
            printf("\nvalor invalido, operacao cancelada...");
            break;
        }

        printf("\nvoce deseja gerar outra figura geometrica? (0 para nao, 1 para sim) ");
        scanf("%d", &activeVal);
        if(activeVal == 0){
            active = false;
        }
    }
    return 0;
}