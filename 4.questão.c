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
        printf("Digite o %d n�mero inteiro: ", i + 1);
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

    printf("Quantidade de n�meros impares: %d\n", impares);
    printf("Quantidade de n�meros negativos: %d\n", Negativos);
    printf("Maior n�mero: %d\n", maior);
    printf("Menor n�mero: %d\n", menor);
    printf("M�dia de pares: %2.f\n", mediaPares);
    printf("M�dia Total: %2.f\n", mediaTotal);

    return 0;
}