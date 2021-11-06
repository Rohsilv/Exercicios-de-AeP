#include<stdio.h>
#include<locale.h>

/*1. Escreva um programa que preencha um vetor de 10 elementos inteiros. 
Em seguida, encontre e mostre o menor elemento e sua posição no vetor.*/

main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	#define total 10
	int n[total], i,menor=32.767, posicao;
	
	for (i=0; i<total; i++){
		printf("digite um número inteiro positivo para o vetor %d:", i+1);
		scanf("%d",&n[i]);
	
	if(i<total){
		if(n[i]<menor){
		menor=n[i];
		posicao=i;
		}
	}
}
	printf("O menor número digitado é: %d \n",menor);
	printf("E a posição no vetor é: %d \n",posicao);
	
	
	
}
