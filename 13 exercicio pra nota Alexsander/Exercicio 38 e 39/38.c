#include <stdio.h>
#include <stdlib.h>
//38. Em um curso de Ci�ncia da Computa��o a nota do estudante � calculada a partir de tr�s notas atribu�das,
//respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. As notas variam, de 0 a
//10 e a nota final � a m�dia ponderada das tr�s notas mencionadas. A tabela abaixo fornece os pesos:
//Laborat�rio Peso 2
//Avalia��o semestral Peso 3
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
