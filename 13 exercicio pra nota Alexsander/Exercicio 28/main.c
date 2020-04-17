#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exercicio 28

//28. Escrever um algoritmo para uma empresa que decide dar um reajuste a seus 584 funcionários de acordo com os
//seguintes critérios:

//a) 50% para aqueles que ganham menos do que três salários mínimos;
//b) 20% para aqueles que ganham entre três até dez salários mínimos;
//c) 15% para aqueles que ganham acima de dez até vinte salários mínimos;
//d) 10% para os demais funcionários.

//Leia o nome do funcionário, seu salário e o valor do salário mínimo. Calcule o seu novo salário reajustado. Escrever o
//nome do funcionário, o reajuste e seu novo salário. Calcule quanto à empresa vai aumentar sua folha de pagamento.
FILE*file;
int main() {
	float salario, salarioN, aumento, dif;
	float salarioM=1000;
	char nome[10];
	int i;
	
	for(i=0;i<585;i++){
			fflush(stdin);
			printf("Informe o nome: ");
				fgets(nome, 10, stdin);
			printf("Informe seu salario: ");
				scanf("%f", &salario);
			printf("\n");
			
				if(salario<salarioM*3){
				aumento=salario*0.5;
				salarioN=salario+aumento;
				dif=salarioN-salario;
					printf("O salario do funcionario %s vai ser %.2f\n\n",nome, salarioN);
					printf("e o reajuste foi %.2f\n\n.", dif);
					
				}else if((salario>=salarioM*3) && (salario<=salarioM*10)){
					aumento=salario*0.2;
					salarioN=salario+aumento;
					dif=salarioN-salario;
					printf("O salario do funcionario %s vai ser %.2f\n\n",nome, salarioN);
					printf("e o reajuste foi %.2f\n\n.", dif);
					
				}else if((salario>salarioM*10) && (salario<=salarioM*20)){
					aumento=salario*0.15;
					salarioN=salario+aumento;
					dif=salarioN-salario;
					printf("O salario do funcionario %s vai ser %.2f\n\n",nome, salarioN);
					printf("e o reajuste foi %.2f\n\n.", dif);
				}else{
					aumento=salario*0.10;
					salarioN=salario+aumento;
					dif=salarioN-salario;
					printf("O salario do funcionario %s vai ser %.2f\n\n",nome, salarioN);
					printf("e o reajuste foi %.2f\n\n.", dif);
				}
	}
	
	return 0;
}


