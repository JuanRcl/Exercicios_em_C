#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//39. Dado o nome de um estudante, com o respectivo n�mero de matr�cula e as tr�s notas acima mencionadas,
//desenvolva um algoritmo para calcular a nota final e a classifica��o de cada estudante. A classifica��o � dada conforme
//a tabela abaixo:
//Nota Final Classifica��o
//[8,10] A
//[7,8] B
//[6,7] C
//[5,6] D
//[0,5] R
//Imprima o nome do estudante, com o seu n�mero, nota final e classifica��o.
int main() {
	char nome[50];
	char linha[10];
	float nota=0;
	float notaf;
	int mat; 
	
	FILE*file;
	file=fopen("Nome.txt","r");
		fgets(nome,50,file);
	fclose(file);
	file=fopen("Nota.txt","r");
		while(fgets(linha,10,file)!=NULL){
			nota=nota+atoi(linha);
		}
	fclose(file);
	notaf=nota/3;
	mat=199243;
	if(notaf>=8&&notaf<=10){
		printf("O aluno %s, matricula %i, tem a nota final: %.1f, pertencendo a classificacao A!\n", nome, mat, notaf);
	}
	else if(notaf>=7&&notaf<=8){
		printf("O aluno %s, matricula %i, tem a nota final: %.1f, pertencendo a classificacao B!\n",nome, mat, notaf);
	}
	else if(notaf>=6&&notaf<=7){
		printf("O aluno %s, matricula %i, tem a nota final: %.1f, pertencendo a classificacao C!\n",nome, mat, notaf);
	}
	else if(notaf>=5&&notaf<=6){
		printf("O aluno %s, matricula %i, tem a nota final: %.1f, pertencendo a classificacao D!\n",nome, mat, notaf);
	}
	else{
		printf("O aluno %s, matricula %i, tem a nota final: %.1f, pertencendo a classificacao R!\n",nome, mat, notaf);
	}
	return 0;
}
