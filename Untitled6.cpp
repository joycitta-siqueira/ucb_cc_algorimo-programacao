#include<stdio.h>
#include<math.h> //matematica

int main(){
	int base, expoente, resultado;
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &expoente);
	resultado = pow(base, expoente);
	printf("%d", resultado);	
}
