// 5.Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
#include <stdio.h>
#include <math.h>

int main() {

    float salarioHora,horasMes,salarioMes;
    
    printf("Qual o seu salario por hora? ");
    scanf("%f",&salarioHora);
    printf("\n Quantas horas voce trabalha por mes?");
    scanf("%f",&horasMes);
    
    salarioMes = (salarioHora*horasMes);
    
    printf("\n\nSeu salario mensal sera de  %.2f.",salarioMes);
}