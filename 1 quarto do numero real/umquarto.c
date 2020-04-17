#include <iostream>
#include <locale.h>

int main(){
	float numero;
	setlocale(LC_ALL,"portuguese");
	printf("Digite um numero real: ");
	  scanf("%f", &numero);
	printf("O valor com 1/4 é: %.4f\n",numero);
	
	system("pause");
	
}

