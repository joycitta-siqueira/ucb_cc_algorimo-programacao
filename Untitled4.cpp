//calcular o area = pi * raio����
#include<stdio.h> //printf e scanf
#include<math.h> //realiza calculos
#define PI 3.14159 //constante
int main(){
	float raio, area;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &raio); // raio � um dado de entrada

	area = PI * pow(raio,2); //POTENCIA pow(base,expoente)
	area = 3.14159 * pow(raio,2); // area � um dado de sa�da
	area = 3.14159 * raio * raio; 
	
	printf("Area: %f", area);
		
}
