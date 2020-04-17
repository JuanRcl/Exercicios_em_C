#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[15];
	char a;
	int idade;
	float peso;
	
	printf("Digite seu nome: ");
		fgets(nome,30,stdin);
	printf("Informe sua idade: ");
		scanf("%d",&idade);
	printf("Informe seu peso: ");
		scanf("%f",&peso);

	if(peso>=50 && (idade>=16 && idade<=69)){
	
		printf("Proxima pergunta");
	}
	else if(a=='s'){	
	Printf("O %s esta apto",nome);		
	}
	else{
		printf("O %s esta  inapto",nome);
	}
}


