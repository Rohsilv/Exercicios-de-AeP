#include<stdio.h>
#include<locale.h>
#define total 6
/*6. Fa�a um programa que leia 25 valores e armazene-os em um vetor de 25 posi��es; Crie um
menu com as seguintes op��es:

1. Encontra um valor. (Essa op��o solicita um valor x, verifica se este valor est� presente no vetor,
e informa todas as posi��es onde existe o valor x no vetor)

2. Calcula o produto de todos os elementos do vetor;

3. Conta quantas vezes aparece o valor v no vetor. (Essa op��o solicita ao usu�rio o
valor v)

4. Verifica se os elementos do vetor est�o em ordem crescente. Se estiver ordenado,
imprima uma mensagem de vetor ordenado, caso contr�rio, ordene.

5. Mostre todos os n�meros que s�o maiores que a m�dia de todos os n�meros informados.

6. Imprima o vetor.*/

main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	int vetor[total], i, j, opcao;
	int cont=0, encontrar;
	int produto, aux;
	int soma, media;
	
	for(i=0; i<total; i++){
    	printf("digite o valor para a posi��o %d do vetor:",i+1);
	    scanf("%d",&vetor[i]);
    }
    
    printf("--------------------------------\n1.encontrar um valor;\n2.calcular o produto de todos os elementos do vetor;\n3.qunatas vezes o valor se repete;\n4.verificar/ordenar em ordem crescente;\n5.n�meros maiores que a m�dia;\n6.imprimir vetor;\n7.Fim do programa.");

	while (opcao!=7){
		printf("\n--------------------------------\ndigite o n�mero da op��o desejada:");
		scanf("%d",&opcao);
	switch(opcao){
		case 1:
		     printf("\ndigite o valor que deseja encontrar: ");
		     scanf("%d",&encontrar);
		
	     	printf("o valor digitado aparece na(s) posi��o(s):");
	    	for(i=0; i<total; i++){
		    	if(vetor[i]==encontrar){
				     cont=cont+1;
				     printf("%d ",i+1);	
			    }
	  	    }if(cont==0){
	  	    	printf("nenhuma posi��o");
	  	    	printf("o valor desejado n�o foi encontrado!");
	  	    	break;
			  }else{
	     	printf("\naparecendo um total de %d vez(s) no vetor",cont);
	        }
		break;
		
		case 2:
			aux=1;
		    for(i=0; i<total; i++){
	 	        produto=vetor[i]*vetor[i+1]*aux;
	 	        aux=produto;
		        i=i+1;
		    }
	    	printf("O produto de todos os elementos � igual a: %d",produto);
	    break; 
			
	    case 3:
	    	printf("\ndigite o valor que deseja encontrar: ");
		    scanf("%d",&encontrar);
	
	    	for(i=0; i<total; i++){
		    	if(vetor[i]==encontrar){
				     cont=cont+1;
			    }
	  	    }
	  	    if(cont==0){
	  	    	printf("o valor desejado n�o foi encontrado!");
	  	    	break;
		    }else{
	        	printf("\naparece um total de %d vez(s) no vetor",cont);
	        }
	    break;  	
		
		case 4:
			for(i=0; i<total; i++){
		        for(j=i+1; j<total; j++){
				    if(vetor[i]>vetor[j]){
		     	    aux = vetor[i];
				    vetor[i] = vetor[j];
				    vetor[j] = aux;
				    cont++;
		            }
	            }
            }if(cont==0){
            	printf("Os vetores j� estavam ordenados");
			}else{
                printf("\nvetores em ordem crescente:");
                for(i=0; i<total; i++){
	         	    printf("%d ",vetor[i]);	
                } 
		    }
		break;
			
		case 5:
			aux=0;
			for(i=0; i<total; i++){
				soma=vetor[i]+vetor[i+1]+aux;
				aux=soma;
				i++;
			}
			media=soma/total;
			printf("o(s) n�mero(s) maior(s) que a media �/s�o: ");
			for(i=0; i<total; i++){
				if(vetor[i]>media){
					printf("%d ",vetor[i]);
					cont++;
				}
			}if(cont==0){
	  	    	printf("n�o existem n�meros maiores que a m�dia");
	  	    	break;
			  }
		break;
		
		case 6:
	    	for(i=0; i<total; i++){
			printf("\nvetor %d= %d ",i+1,vetor[i]);
	    	}	  
	    break;
		
		case 7:
			printf("FIM DO PROGRAMA");
			return 0;
		}
	
	}

}























