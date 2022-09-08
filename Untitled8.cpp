#include<stdio.h>
int main (){
	int valorA, valorB, restoDivisao, valorDivisao;
	printf("Digite o valor A: ");
	scanf("%d", &valorA);
	printf("Digite o valor B: ");
	scanf("%d", &valorB);
	restoDivisao = valorA % valorB;
	valorDivisao = valorA / valorB;
	printf("Resto: %d\n", restoDivisao);
	printf("Divisao: %d", valorDivisao);		
}
