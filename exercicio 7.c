#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
#define total 50

/*7. Escreva um programa que crie um vetor de inteiros de 50 posições e gere aleatoriamente
valores para as 50 posições. Mostre os valores em ordem crescente e decrescente.*/

main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	int vetor[total], i, j, n, aux;
	srand( time(NULL) );
	
	for(i=0; i<total; i++){
		n=rand()%50;
		vetor[i]=n;

	}
	for(i=0; i<total; i++){
		for(j=i+1; j<total; j++){
				if(vetor[i]>vetor[j]){
		     	aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
		        }
	    }
    }
    printf("\nvetores em ordem crescente:");
    for(i=0; i<total; i++){
		printf("%d ",vetor[i]);	
    }
    printf("\nvetores em ordem decrescente:");
    for(i=total-1; i>-1; i--){
		printf("%d ",vetor[i]);	
    }
}
	
	
	
	
	
	
	
	
	
