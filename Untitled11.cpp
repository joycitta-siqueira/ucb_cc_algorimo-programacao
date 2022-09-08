#include<stdio.h>
int main(){
	char nome[100]; //string - cadeia de caracteres
	char sexo; //caractere 
    int nMatricula, nHorasTrabalhadas;
    float valorPorHora, salario;
    
    printf("Digite o nome: ");
	scanf("%s", &nome);
	printf("Digite o numero de matricula");
	scanf("%d", &nMatricula);
	printf("Digite o numero de horas trabalhadas");
	scanf("%d", &nHorasTrabalhadas);
	printf("Digite o valor por horas trabalhadas");
	scanf("%f", &valorPorHora);
	printf("Digite o sexo: ");
	scanf("%c", &sexo);
	salario = nHorasTrabalhadas * valorPorHora;
	printf("Funcionario: %s\n", nome);
	printf("Numero de matricula: %d\n", nMatricula);
	printf("Sexo: %c\n", sexo);
	printf("Numero de horas trabalhadas: %d\n", nHorasTrabalhadas);
	printf("Valor por hora trabalhada: %.2f\n", valorPorHora);
	printf("-----------------------\n");
	printf("Salario: %.2f\n", salario);

    
}
