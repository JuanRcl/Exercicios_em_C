#include <stdio.h>
#include <stdlib.h>

int main() {
	char sexo,nome[20];
	int idade;
	printf("Informe seu nome: ");
		gets(nome);
	printf("Informe seu sexo M OU F: ");
		scanf("%c",&sexo);
	printf("Informe sua idade: ");
		scanf("%d",&idade);
	if((sexo=='f' || sexo=='F') && idade<25)
		printf(" %s voce foi aceito(a)",nome);
	
	else printf(" %s voce NAO foi aceito(a)",nome);
}
