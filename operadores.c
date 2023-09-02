#include <stdio.h>
#include <math.h>

void clearBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};

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
    float number, biggest, lowest;
    int i;

    printf("digite 4 números a ser comparados: \n");

    scanf("%f", &number);

    biggest = lowest = number;

    for (i = 0; i < 3; i++)
    { 
        scanf ("%f", &number);
        if (biggest < number)
            biggest = number;
        else if (lowest > number)
            lowest = number;
    }

    printf("maior: %f, menor: %f", biggest, lowest);

};

void ascNumbers()
{
    float a, b, c;
    int i;

    printf("digite 3 números a ser organizados asc: \n");
    scanf("%f %f %f", &a, &b, &c);

    if(a < b && a < c)
    {
        printf("%f\n", a);
        if(b < c)
        {
           printf("%f\n %f\n", b, c);
        }
        else
        {
          printf("%f\n %f\n", c, b);
        }
    }
    else if(b < a && b < c)
    { 
         printf("%f\n", b); 
  
         if(a < c){ 
             printf("%f\n %f\n", a, c);
         }
         else
         {
             printf("%f\n %f\n", c, a);
         } 
    }
    else
    { 
         printf("%f\n", c); 
  
         if(a < b){ 
             printf("%f\n %f\n", a, b); 
         }else if (b < a){ 
             printf("%f\n %f\n", b, a); 
         } 
  
    }
};

void descNumbers()
{
  float a, b, c;
    int i;

    printf("digite 3 números a ser organizados asc: \n");
    scanf("%f %f %f", &a, &b, &c);

    if(a > b && a > c)
    {
        printf("%f\n", a);
        if(b > c)
        {
           printf("%f\n %f\n", b, c);
        }
        else
        {
          printf("%f\n %f\n", c, b);
        }
    }
    else if(b > a && b > c)
    { 
         printf("%f\n", b); 
  
         if(a > c){ 
             printf("%f\n %f\n", a, c);
         }
         else
         {
             printf("%f\n %f\n", c, a);
         } 
    }
    else
    { 
         printf("%f\n", c); 
  
         if(a > b){ 
             printf("%f\n %f\n", a, b); 
         }else if (b > a){ 
             printf("%f\n %f\n", b, a); 
         } 
  
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
    else if(number >= 500 || number >= 1000)
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