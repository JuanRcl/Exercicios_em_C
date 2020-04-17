#include <stdlib.h>
#include <stdio.h>

int main(){
	float salario, prestacoes, limite;
	printf("Informe seu salario para analise de credito: ");
		scanf("%f",salario);
	printf("Informe o valor das prestacoes desejadas: ");
		scanf("%f",prestacoes);
	limite=(salario*0.30);
	
	if(prestacoes > limite){
		printf("As prestacoes ultrapassam 30% do seu salario, tente um valor menor");
	}
	else{
		printf("O valor esta dentro dos 30% do seu salario");
	}
	
}
