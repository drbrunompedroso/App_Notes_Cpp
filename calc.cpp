/****************************************
   Etec Presidente Vargas
   Curso Técnico em Automação Industrial
   Prof. Dr. Bruno Medina Pedroso
   Resolução - Cálculo de  Notas
*****************************************/

#include <stdio.h>
#include <stdlib.h>

float p1,
      p2,
      mex1,
      mex2,
      m1,
      m2,
      mf;
int main(void)
{
    //***************Cálculo de Media M1*****************//
    printf("Entre com o valor de P1: \n");
    scanf("%f",&p1);
    printf("Entre com o valor de MEX1:  \n");
    scanf("%f",&mex1);

    m1 = (p1*0.90)+(mex1*0.10);

    printf("Media M1: %.2f \n",m1);

    //**************Cálculo de Media M2****************//
    printf("Entre com o valor de P2: \n");
    scanf("%f",&p2);
    printf("Entre com o valor de MEX2:  \n");
    scanf("%f",&mex2);

    m2 = (p2*0.90)+(mex2*0.10);

    printf("Media M2: %.2f \n",m2);

    //************Cálculo de Media MF****************//
    mf = (m1 +(m2*2))/3;
    printf("Media MF: %.2f \n",mf);

    //***********Análise Condicional****************//
    if(mf >= 5.0)
    {
        printf("Aluno APROVADO\n");
    }
    else if(mf >= 3.0 && mf < 5.0)
    {
        printf("Aluno em EXAME (RECUPERACAO) \n");
    }
    else if(mf < 3.0)
    {
        printf("Aluno REPROVADO \n");
    }
    system("pause");
}