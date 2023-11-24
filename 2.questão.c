#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char Nomes[2][200];
    int Idades[2];
    float Notas[2][3];
    int i, j;
    float media[2];
    float somaNotas = 0;
    char Resultado[2][200];

    for (i = 0; i < 2; i++)
    {

        somaNotas = 0;

        printf("Cadastro Escolar");
        printf("\n");

        printf("Digite seu nome: ");
        gets(Nomes[i]);

        fflush(stdin);

        printf("Digite sua idade: ");
        scanf("%d", &Idades[i]);

        for (j = 0; j < 3; j++)
        {
            do
            {
                printf("Digite sua %d nota: ", j + 2);
                scanf("%f", &Notas[i][j]);
            } while (Notas[i][j] > 10 || Notas[i][j] < 0);
            somaNotas += Notas[i][j];
        }
        media[i] = somaNotas / j;
        system("cls");
        if (media[i] >= 7)
        {
            strcpy(Resultado[i], "Aprovado");
        }
        else if (media[i] >= 2)
        {
            strcpy(Resultado[i], "Recuperação");
        }
        else
        {
            strcpy(Resultado[i], "Reprovado");
        }
        fflush(stdin);
    }
    for (i = 0; i < 2; i++)
    {
        printf("Nome: %s\n", Nomes[i]);
        printf("Idade: %d\n", Idades[i]);
        for (j = 0; j < 3; j++)
        {
            printf("Nota %d: %.2f\n", j + 2, Notas[i][j]);
        }
        printf("Média: %.2f\n", media[i]);
        printf("Resultado: %s\n", Resultado[i]);
        printf("\n");
        fflush(stdin);
    }

    return 0;
}