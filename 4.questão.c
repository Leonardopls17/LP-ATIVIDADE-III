#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int Numeros[5];
    int pares = 0;
    int impares = 0;
    int maior = -99999999;
    int menor = 99999999;
    float mediaPares;
    int somaPares = 0;
    float mediaTotal;
    int somaTotal = 0;
    int i;
    int Negativos = 0;


    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d número inteiro: ", i + 1);
        scanf("%d", &Numeros[i]);

        somaTotal += Numeros[i];

        if (Numeros[i] % 2 == 0)
        {
            somaPares += Numeros[i];
            pares++;
        }else{
            impares++;
        }

        if (Numeros[i] > maior)
        {
            maior = Numeros[i];
        }
        if (Numeros[i] < menor)
        {
            menor = Numeros[i];
        }
        if(Numeros[i] < 0){
            Negativos++;
        }
    }
        mediaTotal = somaTotal / i;
        mediaPares = somaPares / pares;

    system("cls");

    printf("Quantidade de números impares: %d\n", impares);
    printf("Quantidade de números negativos: %d\n", Negativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de pares: %2.f\n", mediaPares);
    printf("Média Total: %2.f\n", mediaTotal);

    return 0;
}