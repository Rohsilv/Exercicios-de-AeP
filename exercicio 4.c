#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
/*4. Escreva um programa que leia um vetor de 20 posições e mostre-o na tela. Em seguida,
troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo,
 e assim sucessivamente até o elemento central do vetor. Por fim, mostre o vetor depois de efetuar todas as trocas. 
(Obs: Faça as trocas no mesmo vetor, sem utilizar vetor auxiliar)*/


main(void){
	
	setlocale(LC_ALL,"portuguese");
	int vetor[20], i=0, j=19;
	
	for(i=0; i<20; i++){
		printf("digite um númrto para o vetor %d:", i+1);
		scanf("%d",&vetor[i]);	
	}
	printf("\n vetor normal:");
	for(i=0; i<20; i++){
		printf("%d ",vetor[i]);
	}
	printf("\nvetor invertido:");
		for(j=19; j>-1; j--){
		printf("%d ",vetor[j]);
    }
}
