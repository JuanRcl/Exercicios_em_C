#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE*file;
int main(void) {
	int op;	
	printf(">>CADASTRO<<\n\n");
	printf(" 1 - Cadastrar Cliente\n 2 - Excluir dados permanentementes\n");
		scanf("%d",&op);
	fflush(stdin);
	switch(op){
		case 1:
			Cadastro();
		break;
		case 2:
			removerCadastro();
		break;
		default:
			defaul();
		break;
	}
	 

	return 0;
}
void defaul(){
	int erro;
	printf("Algo deu errado, digite 1 para encerrar o programa ou 2 para voltar ao menu: ");
				scanf("%d",&erro);
		if(erro==1){
			system("pause");
			exit(0);
		}else{
			system("cls");
			Cadastro();
		}
}
void removerCadastro(){
	char alerta;
	printf("Tem certeza que deseja apagar todos os dados do arquivo ? s/n: ");
			scanf("%c",&alerta);
		if(alerta=='s' || alerta=='S'){
			file=fopen("Clientes.txt", "w");
			fprintf(file,"");
			fclose(file);
		}else{
			system("cls");
			main();
		}
}
void Cadastro(){
	char nome[50];  
	char email[20];
	char cpf[20];
	int escolha, op, decisao;
	do{	
			printf("\nDigite o nome: ");
				gets(nome);
			printf("Digite o email: ");
				gets(email);
			printf("Digite o cpf: ");
				gets(cpf);
			file=fopen("Clientes.txt", "a");
				fprintf(file,"%s %s %s\n",nome, email, cpf);
			fclose(file);
			printf("Digite 1 para continuar ou qualquer outro numero para sair: ");
				scanf("%d",&op);
	}while(op==1);
}


