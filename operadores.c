#include <stdio.h>
#include <math.h>

void clearBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};
// Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.
// Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 
// Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).
// Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).
// Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores. 

void checkNumbers()
{
    float number, result;

    printf("Digite um número... \n");
    printf("negativo = raiz quadrada do número \n");
    printf("positivo = dobro do número \n");

    scanf("%f", &number);

    if(number >= 0)
    {
        result = sqrt(number);
        printf("o número %f é positivo, seu dobro é: %f", number, result);
    } 
    else
    {
        result = number * number;
        printf("o número %f é negativo, sua raiz é: %f", number, result);
    }
}

void calculateMagnitude()
{
    float numbers[4];
    float biggest, lowest;
    int i, j;
    printf("digite 4 números a ser comparados: \n");

    for(i = 0; i < 4; i++)
    {
        scanf("%f", &numbers[i]);
    }

};

void ascNumbers()
{
    float numbers[3];
    int i, j, k;

    printf("digite 3 números a ser organizados asc: \n");
    scanf("%f %f %f", &numbers[0], &numbers[1], &numbers[2]);

    for(i = 0; i < 3; i++)
    {
        for(j = 1; j < 3; j++)
        {
            k = 2;
            if(numbers[i] < numbers[j] && numbers[i] < numbers[k]) 
            {
                printf("%f menor que todos: %f %f\n", numbers[i], numbers[j], numbers[k]);
            }
            k++;
        }
    }
};

void descNumbers()
{
    float numbers[3];
    int i, j, k;

    scanf("%f %f %f", &numbers[0], &numbers[1], &numbers[2]);

    printf("digite 3 números a ser organizados desc: \n");

    if(numbers[0] < numbers[1])
    {
        printf("menor %f", numbers[1]);
    }
    else if(numbers[1] < numbers[2])
    {
        printf("menor %f", numbers[1]);
        printf("maior %f", numbers[2]);
    }
    else if(numbers[2] < numbers[0])
    {
        printf("menor %f", numbers[1]);
        printf("maior %f", numbers[0]);
    }
    else
    {
        printf("menor %f", numbers[1]);
        printf("maior %f", numbers[2]);
    }
};

void checkAndCompare()
{
    int number;
    printf("escolha um número: \n");
    scanf("%d", &number);

    if(number ==  5)
    {
        printf("número %d igual a 5.", number);
    }
    else if(number == 200)
    {
        printf("número %d igual a 200.", number);
    }
    else if(number == 400)
    {
        printf("número %d igual a 400.", number);
    }
    else if(number >= 500 || number <= 1000)
    {
        printf("número %d no intervalo entre 500 e 100.", number);
    }
};


int main()
{
    int option;
    printf("Escolha uma opcao: \n");
    printf("1 - raiz quadrada ou ao quadrado\n");
    printf("2 - comparar magnitude\n");
    printf("3 - organizar numeros de forma ASC\n");
    printf("4 - organizar numeros de forma DESC\n");
    printf("5 - numero igual ou em intervalo especifico\n");

    option = getchar();
    clearBuffer();

    switch(option)
    {
        case '1': 
        {
            checkNumbers();
            break;
        }
        case '2':
        {
            calculateMagnitude();
            break;
        }
        case '3':
        {
            ascNumbers();
            break;
        }
        case '4':
        {
            descNumbers();
            break;
        }
        case '5':
        {
            checkAndCompare();
            break;
        }
    }

    return 0;
};