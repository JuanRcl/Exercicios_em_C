#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // inclui apenas para usar o sleep
int val=0;
int a;
char line[10];
int main() {
	
	FILE*file;	
	
	file=fopen("Valor_total_pedidos.txt","r");
	fgets(line, 10, file);
        val =  val + atoi(line);
    fclose(file);

	printf("O valor e %d\n", val);
	int matriz[3] [3] = {{val,2,3},
						{4,5,6},	
						{7,8,9}};
	int i;
	int j;			
							                          
		for(i=0;i<3;++i){
			for(j=0;j<3;++j){															
			printf("%d", matriz[i] [j]);
			}
			printf("\n");
		}					
						
								
}
