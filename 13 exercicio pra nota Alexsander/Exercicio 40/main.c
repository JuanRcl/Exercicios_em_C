#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Uma Companhia de Seguros possui nove categorias de seguro baseadas na idade e ocupação do segurado. Somente
//pessoas com pelo menos 17 anos e não mais de 70 anos podem adquirir apólices de seguro. Quanto às classes de
//ocupações, foram definidos três grupos de risco. A tabela abaixo fornece as categorias em função da faixa etária e do
//grupo de risco. Dados nome, idade e grupo de risco, determinar a categoria do pretendente à aquisição de tal seguro.
//Imprimir o nome a idade e a categoria do pretendente, e , caso a idade não esteja na faixa necessária, imprimir uma
//mensagem.

int main() {
	int idade, escolha;
	char nome[50];
	printf("Informe sua idade: ");
		scanf("%i",&idade);
	if(idade<17||idade>70){
		printf("So e permitido para pessoas com idade entre 17 e 70 anos!\n");
		system("pause");
		system("cls");
		main();
	}
	else{
		fflush(stdin);
		printf("Informe seu nome: ");
			gets(nome);
		printf("Qual grupo deseja selecionar do 1 ao 9?: ");
			scanf("%i",&escolha);
			switch(escolha){
				case 1:
					printf("O cliente %s, de idade %i, escolheu o grupo 1, sendo o de baixo risco.\n",nome, idade);
				break;
				case 2:
					printf("O cliente %s, de idade %i, escolheu o grupo 2, sendo o de medio risco.\n",nome, idade);
				break;
				case 3:
					printf("O cliente %s, de idade %i, escolheu o grupo 3, sendo o de alto risco.\n",nome, idade);
				break;
				case 4:
					printf("O cliente %s, de idade %i, escolheu o grupo 4, sendo o de baixo risco.\n",nome, idade);
				break;
				case 5:
					printf("O cliente %s, de idade %i, escolheu o grupo 5, sendo o de medio risco.\n",nome, idade);
				break;
				case 6:
					printf("O cliente %s, de idade %i, escolheu o grupo 6, sendo o de alto risco.\n",nome, idade);
				break;
				case 7:
					printf("O cliente %s, de idade %i, escolheu o grupo 7, sendo o de baixo risco.\n",nome, idade);
				break;
				case 8:
					printf("O cliente %s, de idade %i, escolheu o grupo 8, sendo o de medio risco.\n",nome, idade);
				break;
				case 9:
					printf("O cliente %s, de idade %i, escolheu o grupo 9, sendo o de alto risco.\n",nome, idade);
				break;
				default:
					printf("Escolha uma opcao valida!\n");
				break;
			}
	}
	return 0;
}
