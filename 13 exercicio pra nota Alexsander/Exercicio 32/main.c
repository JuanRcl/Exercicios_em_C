#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//32. Dados tr�s valores A, B e C, em que A e B s�o n�meros reais e C � um caractere, pede-se para imprimir 
//o resultado da opera��o de A por B se C for um s�mbolo de operador aritm�tico; caso contr�rio deve ser impressa uma mensagem de
// operador n�o definido. Tratar erro de divis�o por zero.


int main(void)
{
char op;
int n1, n2, resp =0;

printf("Digite o primeiro valor inteiro: ");
scanf("%d", &n1);

printf("Digite o segundo valor inteiro: ");
scanf("%d", &n2);

printf("Digite um operador aritmetico para informar qual operacao deseja fazer com os numeros:  ");
scanf("%s", &op);

switch (op)
{
case '+':
resp = n1 + n2;
printf("\n Resposta = %d",resp);
break;

case '-':
resp = n1 - n2;
printf("\n Resposta = %d",resp);
break;

case '*':
resp = n1 * n2;
printf("\n Resposta = %d",resp);
break;

case '/':
if(n1==0 || n2==0){
	printf("0");
}else{
resp = n1 / n2;
printf("\n Resposta = %d",resp);
}

break;

default:
printf("\n Erro ");
break;
}

return 0;
}

