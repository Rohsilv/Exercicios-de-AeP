#include <stdio.h>
#include<locale.h>

/*2. Escreva um programa que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, 
colocando o resultado em um terceiro vetor. Por fim, exiba os três vetores.
*/

int main() {
	setlocale(LC_ALL,"portuguese");
	
    int a[10], b[10], c[10], i;
    for (i = 0; i<10; i++) {
        printf("Insira o %d elemento do vetor 1: ", (i+1));
        scanf("%d", &a[i]);
       printf("Insira o %d elemento do vetor 2: ", (i+1));
        scanf("%d", &b[i]);
    }
    printf("Vetor 1: ");
	for(i=0; i<10; i++){
		c[i] = a[i] * b[i];
		printf("%d ", a[i]);
    }
    
	printf("\nVetor 2: ");
	for(i=0; i<10; i++){
		printf("%d ", b[i]);
    }
	
	printf("\nVetor 3: ");
	for(i=0; i<10; i++){	
		printf("%d ", c[i]);
	}
   
    return 0;
}
