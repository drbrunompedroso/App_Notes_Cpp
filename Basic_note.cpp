#include<stdio.h>
#include<stdlib.h>

float result,
      nota1,
      nota2;

int main(void)
{
    printf("Digite Nota M1: \n");
    scanf("%f",&nota1);
    printf("Digite Nota M2: \n");
    scanf("%f",&nota2);

    result = (nota1 + nota2)/2;
    printf("Resultado da media: %.2f \n", result);

    if(result >= 5.0)
    {
        printf("Aluno APROVADO \n");
    }
    else
    {
        printf("Aluno REPROVADO \n");
    }
    system("pause");
}
      