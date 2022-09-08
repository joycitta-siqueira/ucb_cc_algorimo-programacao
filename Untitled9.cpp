#include<stdio.h>
#define METROSROLO 80
int main (){
	int metros, rolos, metrosAvulsos;
	printf("Digite o valor A: ");
	scanf("%d", &metros);
	rolos = metros / METROSROLO;
	metrosAvulsos = metros % METROSROLO;
	printf("Rolos: %d\n", rolos);
	printf("Metros avulsos: %d\n", metrosAvulsos);
	printf("Voce precisa de %d rolos e %d metros avulsos\n", rolos, metrosAvulsos);	
}
