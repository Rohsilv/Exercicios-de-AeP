#include<stdio.h>
#include<locale.h>

/*1. Escreva um programa que preencha um vetor de 10 elementos inteiros. 
Em seguida, encontre e mostre o menor elemento e sua posi��o no vetor.*/

main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	#define total 10
	int n[total], i,menor=32.767, posicao;
	
	for (i=0; i<total; i++){
		printf("digite um n�mero inteiro positivo para o vetor %d:", i+1);
		scanf("%d",&n[i]);
	
	if(i<total){
		if(n[i]<menor){
		menor=n[i];
		posicao=i;
		}
	}
}
	printf("O menor n�mero digitado �: %d \n",menor);
	printf("E a posi��o no vetor �: %d \n",posicao);
	
	
	
}
