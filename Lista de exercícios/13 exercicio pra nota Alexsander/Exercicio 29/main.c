#include <stdio.h>
#include <stdlib.h>

void main() {
	int mes;
	
	printf("Digite o numero de um mes: ");
		scanf("%d",&mes);
while(mes<13){
	switch(mes){
		case 1:
			printf("Janeiro\n");
				main();
			system("pause");
		break;
		case 2:
			printf("Fevereiro\n");
				main();
			system("pause");
		break;
		case 3:
			printf("Marco\n");
				main();
			system("pause");
		break;
		case 4:
			printf("Abril\n");
				main();
			system("pause");
		break;
		case 5:
			printf("Maio\n");
				main();
			system("pause");
		break;
		case 6:
			printf("Junho\n");
				main();
			system("pause");
		break;
		case 7:
			printf("Julho\n");
				main();
			system("pause");
		break;
		case 8:
			printf("Agosto\n");
				main();
			system("pause");
		break;
		case 9:
			printf("Setembro\n");
				main();
			system("pause");
		break;
		case 10:
			printf("Outubro\n");
				main();
			system("pause");
		break;
		case 11:
			printf("Novembro\n");
				main();
			system("pause");
		break;
		case 12:
			printf("Dezembro\n");
			system("pause");
			exit(0);
		break;
		default:
			printf("Digite um mes valido\n");
			exit(0);
		break;
	system("pause");
	exit(0);
	}

}
	return 0;
}
