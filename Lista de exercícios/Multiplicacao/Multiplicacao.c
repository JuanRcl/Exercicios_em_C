#include <stdio.h>
#include <stdlib.h>

//Fazendo um programa com multiplicacao por 2 se um valor e por 4 se outro

int main() 
{
	int valor, resultado;
	printf("Digite um valor inteiro: ");
		scanf("%d", &valor);
	
	if (valor>20)
	{
		(resultado=valor*2);
		printf("O resultado e: %d", resultado);
	}
	else{
	
		(resultado=valor*4);
		printf("O resultado e: %d", resultado);
	}			
	
}
