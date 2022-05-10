#include <stdio.h>

/*
 * Ordena um vetor "v" de tamanho "n" por Selection Sort
 *
 * Entradas:
 * v - vetor a ser ordenado
 * n - quantidade de elementos dentro de "v"
 *
 * Sa da:
 * v - o vetor de entrada   modificado pela ordena  o
*/

void ordenaVetor(int *v, int n)
{
    int i = 0, j = 0;

    /* percorre todo o vetor */
    for(i = 0; i < n-1; i++)
    {
        /* procura o menor elemento para a posi  o "i" */
        int menor = i;

        for(j = i+1; j < n; j++)
        {
            if(v[j] < v[menor])
                menor = j;
        }

        /* troca o elemento atual pelo menor */
        if(menor != i)
        {
            int tmp = v[i];
            v[i] = v[menor];
            v[menor] = tmp;
        }
    }
}

/*
 * Imprime um vetor "v" de tamanho "n"
 *
 * Entradas:
 * v - vetor a ser exibido
 * n - quantidade de elementos dentro de "v"
*/

void imprimeVetor(const int *v, int n)
{
    int i = 0;

    for(i = 0; i < n; i++)
        printf("%d ", v[i]);
}

int main()
{
    int v[] = {22, 14, 1, 5, 3, 2, -1, 0, 0, 4};
    size_t n = sizeof(v)/sizeof(v[0]);

    printf("Vetor original: \n");
    imprimeVetor(v, n);

    ordenaVetor(v, n);

    printf("\n\nVetor ordenado: \n");
    imprimeVetor(v, n);

    return 0;
}