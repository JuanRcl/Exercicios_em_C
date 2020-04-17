#include <stdio.h>
#include <stdlib.h>
//36. Faça um algoritmo que calcule o valor da conta de luz de uma pessoa. Sabe-se que o cálculo da conta de luz segue
//a tabela abaixo:
//Tipo de Cliente Valor do KW/h
//1 (Residência) 0,60
//2 (Comércio) 0,48
//3 (Indústria) 1,29
int main() {
	float kw, conta;
	int tipo;
	printf(" 1 - Residencial \n 2 - Comercio \n 3 - Industria\n");
	printf("Informe qual o tipo da conta: ");
		scanf("%d",&tipo);
		if(tipo<1||tipo>3){
			printf("Escolha uma opcao valida!\n");
			system("pause");
			system("cls");
			main();
			fflush(stdin);
			
		}
	printf("Informe quantos KW/h marca no medidor: ");
		scanf("%f",&kw);
	switch(tipo){
		case 1:
			conta=kw*0.60;
			printf("O valor da conta e: %.2f\n",conta);
		break;
		case 2:
			conta=kw*0.48;
			printf("O valor da conta e: %.2f\n",conta);
		break;
		case 3:
			conta=kw*1.28;
			printf("O valor da conta e: %.2f\n",conta);
		break;
		default:
			printf("Escolha uma opcao valida!\n");
			main();
			system("cls");
			system("pause");
			
	}
	return 0;
}
