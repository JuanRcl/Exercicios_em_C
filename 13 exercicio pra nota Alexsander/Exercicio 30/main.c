#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int idade;
	char nome[50];
	char sexo;
	float salariol, dif;
	float salario;
	fflush(stdin);
	printf("Informe seu nome: ");
		fgets(nome,50,stdin);
	printf("Informe seu sexo M/F: ");
		scanf("%s", &sexo);
	printf("Informe sua idade: ");
		scanf("%d",&idade);
	printf("Informe seu salario fixo: ");
		scanf("%f",&salario);
	printf("%d\n", idade);
	printf("%c\n",sexo);
	printf("%.2f\n", salario);

	if(sexo=='M' && idade>=30){
		salariol=salario+100;
		printf("O funcionario %s tera um salario liquido de %.2f\n",nome, salariol);
	}else if(sexo=='M' && idade<30){
		salariol=salario+50;
		printf("O funcionario %s tera um salario liquido de %.2f\n",nome, salariol);
	}else if((sexo=='F')&& (idade>=30)){
		salariol=salario+200;
		printf("O funcionario %s tera um salario liquido de %.2f\n",nome, salariol);
	}else if((sexo=='F')&& (idade<30)){
		salariol=salario+80;
		printf("O funcionario %s tera um salario liquido de %.2f\n",nome, salariol);
	}
		
	dif=salariol-salario;
	printf("A diferenca do salario e: %.2f", dif);
	return 0;
}
