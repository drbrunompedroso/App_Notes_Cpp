#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float c, b, g;

void calc_nota()
{
c= (b+g)/2;	
}

int main(void)
{
		setlocale(LC_ALL, "Portuguese");
		printf ("digite a nota 1 \n");
		scanf ("%f", &b);
		printf ("digite a nota 2 \n");
		scanf ("%f", &g);

		calc_nota();
		printf (" a nota e %f",c);
		
				if(c<=3)
				{
				        printf ("\n reprovado");
				}
				else if (c>3 && c<=5)
				{
				        printf("\n""recuperação");
				}
				else if (c>5)
				{
				    printf ("\n""aprovado");
				}
				
		printf("\n" "Pressione qualquer tecla para sair.");
		system("pause");
		return 0;
}

