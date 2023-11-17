#include <stdio.h>

	typedef struct numero {
  		int z;
  		int w;
	}Complexo;

	Complexo soma(int a, int bi, int c, int di) {
  		Complexo resultado;
  		resultado.z = (a+c);
  		resultado.w = (bi+di);

 	 return resultado;
	}
	Complexo multiplicacao(int a, int bi, int c, int di) {
  		Complexo resultado;
  		resultado.z = ((a*c)-(bi*di));
  		resultado.w = ((a*di)+(bi*c));

 	 return resultado;
	}
int main(){
	Complexo resultado; 
	int a, bi, c, di;
	char ch;
	scanf("%d %d %c %d %d", &a, &bi, &ch, &c, &di);

	switch(ch){
		case '+': 
		resultado = soma(a,bi,c,di);
		printf("%d + %di\n",resultado.z,resultado.w);
			break;
		case '*':
		resultado = multiplicacao(a,bi,c,di);
		printf("%d + %di\n", resultado.z, resultado.w);		
			break;
	}
	return 0;
}
