#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int codigo, i, posicao = 0;
    char nomes[999][200];
    char Numeros[999][200];

    do
    {
        printf("Agenda\n");
        printf("1 para adicionar um contato\n");
        printf("2 para exibir contatos salvos\n");
        printf("Insira um código: ");
        scanf("%d", &codigo);

        fflush(stdin);

        system("cls");

        switch (codigo)
        {
        case 1:

            printf("Digite seu nome: ");
            gets(nomes[posicao]);

            printf("Digite seu número: ");
            gets(Numeros[posicao]);

            posicao++;

            system("cls");

            break;
        case 2:

            for (i = 0; i < posicao; i++)
            {
                printf("%dº Contato\n", i + 1);
                printf("Nome: %s\n", nomes[i]);
                printf("Número: %s\n", Numeros[i]);
                printf("\n");
            }

            break;
        default:
            printf("Código inválido!\n");
            break;
        }
    } while (codigo != 2);

    return 0;
}