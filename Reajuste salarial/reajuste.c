#include <stdio.h>
#include <stdlib.h>

//Fazendo um programa de reajuste salarial
//Se cargo = 1 : 7% - Se cargo = 2 : 9% - Se cargo = 3 : 5% - Se cargo = 4 : 12%

int main() 
{
	int cargo;
	float salario, reajuste, salarioa;
	
	printf("Informe o seu cargo: ");
		scanf("%d", &cargo);
	printf("\nInforme seu salario atual: ");
		scanf("%f", &salario);
	
	if (cargo==1)
	{
		reajuste=(salario*0.07);
	}
	else if(cargo==2)
	{
		reajuste=(salario*0.09);
	}
	else if(cargo==3)
	{
		reajuste=(salario*0.05);
	}
	else{
		reajuste=(salario*0.12);
	}
		(salarioa=salario+reajuste);
		printf("\nO reajuste e: %.2f e o salario atualizado e: %.2f\n",reajuste, salarioa);
	
}
