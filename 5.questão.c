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
    char nomeProduto[999][200];
    int Quantidade[200];
    float ValorProduto[200];
    do
    {
        printf("Venda\n");
        printf("1 para adicionar venda\n");
        printf("2 para exibir total de vendas\n");
        printf("Insira um código: ");
        scanf("%d", &codigo);
        
        fflush(stdin);
        
            system("cls");

        switch (codigo)
        {
        case 1:
            
            fflush(stdin);
            
            printf("Digite  o nome do produto: ");
            gets(nomeProduto[posicao]);

            fflush(stdin);

            printf("Digite o valor do produto: ");
            scanf("%f", &ValorProduto[posicao]);
            
            printf("Digite a quantidade do produto: ");
            scanf("%d", &Quantidade[posicao]);
           
            posicao++;
            
            system("cls");

            break;
        case 2:

            for (i = 0; i < posicao; i++)
            {
                printf("%dº Venda\n", i + 1);
                printf("Nome do produto: %s\n", nomeProduto[i]);
                printf("Valor do produto: %.2f\n", ValorProduto[i]);
                printf("Quantidade disponível: %d\n", Quantidade[i]);
                printf("\n");
            }

            break;
        default:
            printf("CÃ³digo invÃ¡lido!\n");
            break;
        }
    } while (codigo != 2);

    return 0;
} 