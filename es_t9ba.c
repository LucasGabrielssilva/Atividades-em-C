#include <stdio.h>
#include<math.h>
#define TAM 10

void vet(int vA[TAM], int vB[TAM]){ 
	int j;
	for(j=0; j<TAM;j++){
		vB[j] = pow(vA[j],3); 
		printf("%d\n", vB[j]);
	}
}
int main() {
	int vA[TAM]; 
	int i;
	for(i=0; i<TAM;i++){
		scanf("%d\n", &vA[i]);
	}		
	vet(vA, vA);

	return 0;
}
