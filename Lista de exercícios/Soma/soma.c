#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	float a, b, c;
	char nome[30];
	printf("Digite seu nome: ");
		scanf("%s",&nome);
	printf("Digite valor de a: ");
		scanf("%f", &a);
	printf("Digite valor de b: ");
		scanf("%f", &b);
	c = a+b;
	printf("O resultado �: %3.2f, e o nome �: %s\a\n",c, nome);
	
	system("pause");	
}
