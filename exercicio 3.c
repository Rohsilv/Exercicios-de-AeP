#include <stdio.h>
#include<locale.h

//fiquei em duvida, ele so divide ele mesmo gerando o n�mero 1 e todos os outros resultam em 0

/*3. Fa�a um programa que leia um vetor de 10 posi��es de n�meros inteiros e divida todos os
seus elementos pelo maior valor do vetor. Mostre o vetor antes e depois dos c�lculos.*/

int main() {
	setlocale(LC_ALL,"portuguese");
	int a[10], i, maior=0;

	
	  for (i = 0; i<10; i++) {
        printf("Insira o %d elemento do vetor: ", i+1);
        scanf("%d", &a[i]);
        
        if(maior<a[i]){
        	maior=a[i];
		}
     }
      printf("\nvetor:");
      for (i = 0; i<10; i++) {
      	printf("%d ", a[i]);
      	a[i]/=maior;
    
    }
      
	 printf("\ndivis�o:");
      for (i = 0; i<10; i++) {
      	printf("%d ", a[i]);
    }


}

