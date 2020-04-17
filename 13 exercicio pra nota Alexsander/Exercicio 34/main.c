#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//34. A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule e exiba o salário de um professor. Sabe-se que o valor da hora/aula segue a tabela abaixo:
//Professor Nível 1 R$12,00 por hora/aula
//Professor Nível 2 R$17,00 por hora/aula
//Professor Nível 3 R$25,00 por hora/aula
int main() {
	float haula, salario;
	int nivel;
	printf("Informe qual e o seu nivel de professor 1, 2 ou 3: ");
		scanf("%d",&nivel);
	printf("Informe quantas horas de aula voce deu: ");
		scanf("%f",&haula);
	switch(nivel){
		case 1:
			salario=haula*12;
			printf("O seu salario e: R$%.2f\n",salario);
		break;
		case 2:
			salario=haula*17;
			printf("O seu salario e: R$%.2f\n",salario);
		break;
		case 3:
			salario=haula*25;
			printf("O seu salario e: R$%.2f\n",salario);
		break;
	}
	system("pause");
	
	return 0;
}
