#include <stdio.h>

void vet(int vetor[],int N){ 
	int i;
	int maior = vetor[0]; 
	int menor = vetor[0]; 

	for(i=0;i < N;i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	printf("maior valor: %d\n", maior);
	printf("menor valor: %d\n", menor);
}
int main() {
	int j, N,vetor[100];
	scanf("%d", &N); 
		for(j=0; j < N;j++){
			scanf("%d", &vetor[j]); 
		}	
	vet(vetor, N); 


	return 0;
}