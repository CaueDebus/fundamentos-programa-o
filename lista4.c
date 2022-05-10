#include <stdio.h>
#include <string.h>

/*
 * Inverte as letras de posi  o numa string
 *
 * Entrada:
 * palavra - uma string a ser invertidas
 *
 * Sa da:
 * o vetor de entrada ser  modificado
 *
 * Exemplo:
 * char p[] = "teste";
 * inverte(p);
 * p -> cont m "etset"
*/

void inverte(char *palavra)
{
    int i = 0;
    int n = strlen(palavra);
    char al;

    for(i = 0; i < n/2; i++)
    {
        al = palavra[i];
        palavra[i] = palavra[n - i -1];
        palavra[n - i -1] = al;
    }
}

int main()
{
    int i = 0;
    char palavras[20][100] = {0};

    /* l  at  20 palavras do usu rio */
    for(i = 0; i < 20; i++)
    {
        printf("Entre com a palavra %d ou ponto (.) para terminar: ", i);
        scanf("%s", &palavras[i][0]);

        /* para se a entrada for um ponto */
        if(strcmp(".", palavras[i]) == 0)
        {
            i--;
            break;
        }
    }

    printf("\nForam lidas %d palavras\n", i + 1);

    /* imprime as palavras invertidas na ordem inversa da inser  o */
    printf("Palavras na ordem inversa:\n");
    for(; i >= 0; i--)
    {
        inverte(&palavras[i][0]);
        printf("%s\n", &palavras[i]);
    }
}