#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome[50],numero[12];
	int cidade,idade,escolha;
	while(escolha!=999){
	
		printf(" Informe seu nome: ");
			gets(nome);
		printf(" Informe sua idade: ");
			scanf("%d",&idade);
		printf(" Informe sua cidade, 1-Sao Vicente \ 2-Santos: ");
			scanf("%d",&cidade);
		if(idade<18){
			printf(" %s insira uma idade valida",nome);
		}
			else{
			 printf(" Idade valida");
			}
		
		switch(cidade){
				case 1:
					printf("\n\n Ola %s, morador de Sao Vicente\n\n",nome);
				break;
				case 2:
					printf("\n\n Ola %s, morador de Santos\n\n",nome);
				break;
		}
		printf(" Deseja encerrar o programa?");
			scanf("%d",&escolha);
	}	
	 system("pause"); 
}
