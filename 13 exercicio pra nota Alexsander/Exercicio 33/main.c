#include <stdio.h>
#include <stdlib.h>

int main() {
	
int A, B, C;
// Seção de Comandos 
printf("entre com o valor de a: ");
	scanf("%d",&A);
printf("entre com o valor de b: ");
	scanf("%d",&B);
printf("entre com o valor de c: ");
	scanf("%d",&C);

	if ((A<B+C) && (B<A+C) && (C<A+B)){
	 printf("Estes valores formam um triangulo ");

	if((A=B) && (B=C)){
		printf("Triangulo Equilatero");
	}else if((A=B) || (B=C) || (A=C)){
		printf("Triangulo Isosceles");
		}else{
			printf("Triangulo Escaleno");
		}
	}else{
		 printf("Estes valores nao formam um triangulo");
		}
		 
	return 0;
}
