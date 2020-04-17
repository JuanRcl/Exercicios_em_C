#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//32. Dados três valores A, B e C, em que A e B são números reais e C é um caractere, pede-se para imprimir 
//o resultado da operação de A por B se C for um símbolo de operador aritmético; caso contrário deve ser impressa uma mensagem de
// operador não definido. Tratar erro de divisão por zero.


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

