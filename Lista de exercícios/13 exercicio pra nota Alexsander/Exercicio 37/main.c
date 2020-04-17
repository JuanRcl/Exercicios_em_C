#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//37. Faça um algoritmo que leia o nome, o sexo, a altura e a idade de uma pessoa. Calcule e mostre nome e o seu peso
//ideal de acordo com as seguintes características da pessoa:

//Masculino:

//Altura >1.70
//• Idade <=20 - 58kg
//• Idade 21 a 39 - 53kg
//• Idade>=40 - 45kg

//Altura <=70
//• Idade <=40 - 50kg
//• Idade >40 - 58kg

//Feminino

//Altura >1.50
//Idade >0 e <100- 44.7kg

//Altura <=1.50
//Idade >=35 - 45kg
//Idade <35 - 49kg
int main() {
	float altura;
	int idade;
	char nome[50];
	char sexo;
	printf("Informe seu nome: ");
		gets(nome);
	printf("Informe seu sexo M/F(Letra maiuscula): ");
		scanf("%c",&sexo);
	printf("Informe sua altura: ");
		scanf("%f",&altura);
	printf("Informe sua idade: ");
		scanf("%d",&idade);
	if((sexo=='M')&&(altura>1.70)&&(idade<=20)){
		printf("O peso ideal do(a) %s e: 58 kg\n",nome);
	}
	else if((sexo=='M')&&(altura>1.70)&&(idade>=21)&&(idade<=39)){
		printf("O peso ideal do(a) %s e: 53 kg\n",nome);
	}
	else if((sexo=='M')&&(altura>1.70)&&(idade>=40)){
		printf("O peso ideal do(a) %s e: 45 kg\n",nome);
	}
	else if((sexo=='M')&&(altura<1.70)&&(idade<=40)){
		printf("O peso ideal do(a) %s e: 50 kg\n",nome);
	}
	else if((sexo=='M')&&(altura<1.70)&&(idade>40)){
		printf("O peso ideal do(a) %s e: 58 kg\n",nome);
	}
	else if((sexo=='F')&&(altura>1.50)&&(idade>1)&&(idade<101)){
		printf("O peso ideal do(a) %s e: 44.7 kg\n",nome);
	}
	else if((sexo=='F')&&(altura>=1.50)&&(idade>=35)){
		printf("O peso ideal do(a) %s e: 45 kg\n",nome);
	}
	else if((sexo=='F')&&(altura>=1.50)&&(idade<35)){
		printf("O peso ideal do(a) %s e: 49 kg\n",nome);
	}
	else{
		printf("Tente outra vez, pode ter ocorrido algum erro!\n");
		system("pause");
		system("cls");
		main();
		
	}
	return 0;
}
