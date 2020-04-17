#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	char nome [40];
	float n1, n2, n3, media;
	
	setlocale(LC_ALL,"portuguese");

	printf("Informe o seu nome e sobrenome: ");
		fgets(nome, 40, stdin);
	printf("Informe as três notas que o aluno obteve: \n");
		scanf("%f %f %f", &n1, &n2, &n3);
	media=(n1+n2+n3)/3;
	printf("A média do aluno, %c é %.1f\n",nome, media);

	system("pause\n");
}
