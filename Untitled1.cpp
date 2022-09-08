#include<stdio.h>
int main(){
	float nota1[3], nota2[3], media[3];
	int i;
	
	for (i=0; i<3; i++){
		printf("Digite a nota");
		scanf("%f", &nota1[i]);
	}
	
	for (i=0; i<3; i++){
		printf("Nota: %f\n", nota1[i]);	
	}
	
	
	
}
