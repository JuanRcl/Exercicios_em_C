#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1,n2,n3,media;
	int qalunos, i;
	char naluno[20];
	i=1;
	printf(" Quantos alunos tem na sala?: ");
		scanf("%d",&qalunos);
	if('000'){
	
		while(i<=qalunos){
			printf(" Informe o nome do aluno: \n");
				scanf("%s",&naluno);
			printf(" Informe as 3 notas do aluno: \n");
				scanf("%f %f %f",&n1,&n2,&n3);
			media=(n1+n2+n3)/3;
			printf("A media do %c e %.1f\n",naluno, media);
		i++;
			exit(0);
		}
	
	}
}
