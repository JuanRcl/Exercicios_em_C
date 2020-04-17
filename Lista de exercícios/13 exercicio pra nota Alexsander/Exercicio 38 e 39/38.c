#include <stdio.h>
#include <stdlib.h>
//38. Em um curso de Ciência da Computação a nota do estudante é calculada a partir de três notas atribuídas,
//respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. As notas variam, de 0 a
//10 e a nota final é a média ponderada das três notas mencionadas. A tabela abaixo fornece os pesos:
//Laboratório Peso 2
//Avaliação semestral Peso 3
//Exame final Peso 5
int main() {
	FILE*file;
	float lab, semestral, exame, nota;
	char nome[50];
	printf("Informe o nome do aluno: ");
		gets(nome);
	printf("Informe a nota do trabalho de laboratorio (0 a 2): ");
		scanf("%f",&lab);
	printf("Informe a nota da avaliacao semestral (0 a 3): ");
		scanf("%f",&semestral);
	printf("Informe a nota do exame final (0 a 5): ");
		scanf("%f",&exame);
		nota=(lab+semestral+exame)/3;
	printf("A nota do aluno %s e: %.2f\n",nome, nota);
	file=fopen("Nota.txt","w");
		fprintf(file,"%.1f\n%.1f\n%.1f",lab, semestral, exame);
	fclose(file);
	file=fopen("Nome.txt","w");
		fprintf(file,"%s",nome);
	fclose(file);
	return 0;
}
