#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	char nome [40];
	float n1, n2, n3, media;
	
	setlocale(LC_ALL,"portuguese");

	printf("Informe o seu nome e sobrenome: ");
		fgets(nome, 40, stdin);
	printf("Informe as tr�s notas que o aluno obteve: \n");
		scanf("%f %f %f", &n1, &n2, &n3);
	media=(n1+n2+n3)/3;
	printf("A m�dia do aluno, %c � %.1f\n",nome, media);

	system("pause\n");
}
