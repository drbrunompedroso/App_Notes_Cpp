#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float MF, M1, M2, MR,EXAME;
void calc_nota()
{
	MF= (M1+(2*M2))/3;	
}
void calc_exame()
{
	MR= (MF+EXAME)/2;
}
int main(void)
{
	printf ("Digite a nota M1 \n");
	scanf ("%f", &M1);
	printf ("Digite a nota M2 \n");
	scanf ("%f", &M2);
	calc_nota();		
	if(MF<=3)
	{
		printf ("\nReprovado");
	}
	else if (MF>3 && MF<=5)
	{	
		printf ("A nota MF e %.2f",MF);
		printf("\nExame");
		printf ("\nDigite a nota EXAME \n");
		scanf ("%f", &EXAME);
		calc_exame();
		printf ( "\nA nota MR e %.2f",MR);
	}				        
	else if(MR>=5.0)
	{
		printf("\nAprovado");
	}	
	system("pause");
	return 0;
}



