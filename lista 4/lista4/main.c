#include <stdio.h>
#include <string.h>

#define NUM_WORDS 3

/*
 * Inverte as letras de posi��o numa string
 *
 * Entrada:
 * palavra - uma string a ser invertidas
 *
 * Sa�da:
 * o vetor de entrada ser� modificado
 *
 * Exemplo:
 * char p[] = "teste";
 * inverte(p);
 * p -> cont�m "etset"
*/

void inverte(char palavra[][100])
{
    int i = 0;

    for(int j = 0; j< NUM_WORDS; j++)
    {
        int n = strlen(palavra[j]);
        for(i = 0; i < n; i++)
        {
            palavra[j][i] = palavra[j][n - i];
            palavra[j][n - i] = palavra[j][i];
        }
        printf("%s", palavra[j]);
    }
}

int main()
{
    int i = 0;
    int j = 0;
    char palavras[NUM_WORDS][100] = {'\0'};

    /* l� at� 20 palavras do usu�rio */
    for(i = 0; i < NUM_WORDS; i++)
    {
        printf("Entre com a palavra %d ou ponto (.) para terminar: ", i);
        scanf("%s", palavras[i]);

        //printf("%s", palavras);
        /* para se a entrada for um ponto */
        if(strcmp(palavras[i], ".") == 0){
            i--;
            break;
        }
    }

    printf("\nForam lidas %d palavras\n", i);
    /* imprime as palavras invertidas na ordem inversa da inser��o */
    printf("Palavras na ordem inversa:\n");
    /*for(j = NUM_WORDS; j >= 0; j--)
    {
        inverte(palavras);
    }*/
    inverte(palavras);
}
