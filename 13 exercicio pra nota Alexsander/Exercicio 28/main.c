#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exercicio 28

//28. Escrever um algoritmo para uma empresa que decide dar um reajuste a seus 584 funcion�rios de acordo com os
//seguintes crit�rios:

//a) 50% para aqueles que ganham menos do que tr�s sal�rios m�nimos;
//b) 20% para aqueles que ganham entre tr�s at� dez sal�rios m�nimos;
//c) 15% para aqueles que ganham acima de dez at� vinte sal�rios m�nimos;
//d) 10% para os demais funcion�rios.

//Leia o nome do funcion�rio, seu sal�rio e o valor do sal�rio m�nimo. Calcule o seu novo sal�rio reajustado. Escrever o
//nome do funcion�rio, o reajuste e seu novo sal�rio. Calcule quanto � empresa vai aumentar sua folha de pagamento.
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


