#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exercicio 31

int main() {
	int a, b, c;
	printf("Informe  3 numeros inteiros: ");
		scanf("%d %d %d",&a,&b,&c);
	if(a<b && b<c){
		printf("%d %d %d",a,b,c);
	}else if(b<a && a<c){
		printf("%d %d %d",b,a,c);
	}else if(c<a && b<a){
		printf("%d %d %d",c, b, a);
	}else if(c<b && a<b){
		printf("%d %d %d",c, a, b);
	}else{
		printf("Numero iguais\n");
	}
		return 0;
}
