#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

float media(float P1, float P2){
	float a;
	a = (P1 + P2)/2;

	return a;
}

int tabulacao(char *alunos ){   
	int i;
	for(i = 0;i < strlen(alunos);i++){
		if(alunos[i] == '\n') {
			alunos[i] = '\t';
			return 0;
		}
	}
	return 1; 
}

int aain(){
	typedef struct aluno{
		char nome[102];
		int RA;
		float notaP1, notaP2;
	}Aluno;
	Aluno *alunos;

	int qtd_alunos;
	int i; 

	scanf("%d",&qtd_alunos);
	getchar();

	alunos = (Aluno*)malloc(qtd_alunos * sizeof(Aluno));

	if(alunos == NULL){
		printf("Muita memoria!\n");
		return 1;
	}
	 	
	for(i=0; i<qtd_alunos; i++){
		fgets(alunos[i].nome, 102, stdin);
		scanf("%d", &alunos[i].RA);
		getchar();
		scanf("%f", &alunos[i].notaP1);
		getchar();
		scanf("%f", &alunos[i].notaP2);
		getchar();
	}
	
		
	 	
	for(i = 0; i<qtd_alunos; i++){
		printf("%d\t", alunos[i].RA);
		tabulacao(alunos[i].nome);
		printf("%s", alunos[i].nome);
		printf("%.2f\n",media(alunos[i].notaP1, alunos[i].notaP2));
		
	}
return 0;
}