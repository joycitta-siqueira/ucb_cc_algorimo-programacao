//calcular o area = pi * raio����
#include<stdio.h> //printf e scanf
#include<math.h> //realiza calculos
#define PI 3.1 //constante
int main(){
	float raio, area;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &raio); // raio � um dado de entrada
	
	
	area = PI * pow(raio,2); // area � um dado de sa�da
	
	area = PI * raio * raio; 
	
	area = PI * raio * raio;
		
	area = PI * raio * raio;
	
	printf("Area: %f", area);
		
}
