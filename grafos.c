#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    system("clear||cls");
    printf("Exercício 1 sobre grafos!!\n");
    printf("Eduardo Schwantz.\nCecilia Botelho.\n");
    int i, j, tam, repeat = 1, teste;
    do
    {
        printf("Digite a quantidade de pontos deseja no grafo. (máximo 20 e sem numeros negativos!): ");
        scanf("%d", &tam);

        if (tam > 20 || tam < 0)
        {
            printf("\nError!\nLimite de pontos excedido!!");
            printf("\nDigite novamente!!");
        }
        else
        {
            int matriz[tam][tam];
            for (i = 0; i < tam; i++)
            {
                for (j = 0; j < tam; j++)
                {
                    do
                    {
                        printf("\nDigite a distância entre o %dº ponto e o %dº ponto (em km.): ", i + 1, j + 1);
                        scanf("%d", &teste);
                    } while (teste < 0);
                    matriz[i][j] = teste;
                }
            }
            for (i = 0; i < tam; i++)
            {
                printf("\t%d\t|\t ", i + 1);
            }

            for (i = 0; i < tam; i++)
            {

                printf("\n");
                printf("%d -", i + 1);
                for (j = 0; j < tam; j++)
                {
                    printf("\t%d km\t|\t", matriz[i][j]);
                }
            }
        }

        printf("\nPara repetir o programa digite 1, para sair 0:");
        scanf("%d", &repeat);
    } while (repeat);
    return 0;
}
