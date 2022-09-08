#include<stdio.h>
#define METROSROLO 80
int main (){
	int metros;
	printf("Digite o valor A: ");
	scanf("%d", &metros);
	printf("Voce precisa de %d rolos e %d metros avulsos\n", metros / METROSROLO, metros % METROSROLO);			
}
