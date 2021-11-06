#include<stdio.h>
#include<locale.h>
#define total 6
/*6. Faça um programa que leia 25 valores e armazene-os em um vetor de 25 posições; Crie um
menu com as seguintes opções:

1. Encontra um valor. (Essa opção solicita um valor x, verifica se este valor está presente no vetor,
e informa todas as posições onde existe o valor x no vetor)

2. Calcula o produto de todos os elementos do vetor;

3. Conta quantas vezes aparece o valor v no vetor. (Essa opção solicita ao usuário o
valor v)

4. Verifica se os elementos do vetor estão em ordem crescente. Se estiver ordenado,
imprima uma mensagem de vetor ordenado, caso contrário, ordene.

5. Mostre todos os números que são maiores que a média de todos os números informados.

6. Imprima o vetor.*/

main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	int vetor[total], i, j, opcao;
	int cont=0, encontrar;
	int produto, aux;
	int soma, media;
	
	for(i=0; i<total; i++){
    	printf("digite o valor para a posição %d do vetor:",i+1);
	    scanf("%d",&vetor[i]);
    }
    
    printf("--------------------------------\n1.encontrar um valor;\n2.calcular o produto de todos os elementos do vetor;\n3.qunatas vezes o valor se repete;\n4.verificar/ordenar em ordem crescente;\n5.números maiores que a média;\n6.imprimir vetor;\n7.Fim do programa.");

	while (opcao!=7){
		printf("\n--------------------------------\ndigite o número da opção desejada:");
		scanf("%d",&opcao);
	switch(opcao){
		case 1:
		     printf("\ndigite o valor que deseja encontrar: ");
		     scanf("%d",&encontrar);
		
	     	printf("o valor digitado aparece na(s) posição(s):");
	    	for(i=0; i<total; i++){
		    	if(vetor[i]==encontrar){
				     cont=cont+1;
				     printf("%d ",i+1);	
			    }
	  	    }if(cont==0){
	  	    	printf("nenhuma posição");
	  	    	printf("o valor desejado não foi encontrado!");
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
	    	printf("O produto de todos os elementos é igual a: %d",produto);
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
	  	    	printf("o valor desejado não foi encontrado!");
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
            	printf("Os vetores já estavam ordenados");
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
			printf("o(s) número(s) maior(s) que a media é/são: ");
			for(i=0; i<total; i++){
				if(vetor[i]>media){
					printf("%d ",vetor[i]);
					cont++;
				}
			}if(cont==0){
	  	    	printf("não existem números maiores que a média");
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























