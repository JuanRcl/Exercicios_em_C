#include <stdio.h>
#include <stdlib.h>
//35. Elabore um algoritmo que, dada a idade de um nadador. Classifique-o em uma das seguintes categorias:
//Infantil A = 5 - 7 anos
//Infantil B = 8 - 10 anos
//juvenil A = 11- 13 anos
//juvenil B = 14 - 17 anos
//Sênior = 18 - 25 anos
//Apresentar mensagem “idade fora da faixa etária” quando for outro ano não contemplado.
int main() {
	int idade;
	printf(" 1 - 5 a 7 anos \n 2 - 8 a 10 anos \n 3 - 11 a 13 anos \n 4 - 14 a 17 anos \n 5 - 18 a 25 anos\n");
	printf("Escolha uma opcao de idade: ");
		scanf("%d",&idade);
	switch(idade){
		case 1:
			printf("Infantil A\n");
		break;
		case 2:
			printf("Infantil B\n");
		break;
		case 3:
			printf("Juvenil A\n");
		break;
		case 4:
			printf("Juvenil B\n");
		break;
		case 5:
			printf("Senior\n");
		break;
		default:
			printf("Idade fora da faixa etaria!\n");
		system("pause");
		system("cls");
		main();
		break;
	}
	system("pause");
	
	
	return 0;
}
