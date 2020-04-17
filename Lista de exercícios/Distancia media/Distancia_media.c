#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	float D;
	float T; 
	float V;
	float L;
	 
		printf("Informe o tempo percorrido na viagem: ");
	 		scanf("%f", &T);
		printf("Informe a velocidade na qual percorreu a viagem: ");
	 		scanf("%f", &V);
	D=(T*V);
	L=(D/12);
		printf("A distância percorrida foi:km %.1f\n",D);
		printf("A quantidade de litros consumidos foi de:L %.1f\n",L);
		system("Pause");

}
		
	 
	
	
