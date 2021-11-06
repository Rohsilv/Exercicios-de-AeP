#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#define total 20

/*5. Faça um programa que leia um vetor A de 20 elementos. Em seguida, compacte o vetor, retirando os valores nulos e negativos.
 Coloque o resultado no vetor B (que possui o mesmo tamanho do vetor A e as posições não utilizadas devem ficar com 0). Imprima o vetor B.*/


main(void){
	
	setlocale(LC_ALL,"portuguese");
    int vetorA[total], i, j = 0; // iniciando j com valor 0
    int vetorB[total]={0,0,0,0,0,0};
    
    for(i=0; i<total; i++){
    	printf("digite um número para o vetor %d:", i+1);
    	scanf("%d",&vetorA[i]);
	}
	
    for(i=0; i<total; i++){
    	vetorB[i] = 0; // Aqui ocupamos o espaço no vetor com o valor 0 ANTES de substituir pelo valor final
    	if(vetorA[i]>0){
		 	// for(j=0; j<total; j++) Se j itera para cada elemento do i, o vetorB tem todos seus valores atualizados
			// É isso que faz todos valores ficarem igual ao último valor válido do vetorA
     	 	vetorB[j]=vetorA[i];
     	 	j++; // O que queremos é que j só se mova para a próxima posição quando o vetorA[i] > 0;
	    }
     }
     
    printf("vetor B:");
    for(j=0; j<total; j++){
      	printf("%d ",vetorB[j]);
    }

}

