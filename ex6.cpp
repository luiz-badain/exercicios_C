// 6.Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius

#include <stdio.h>
#include <math.h>

int main(void)
{
    float fa, ce;
 
    printf("Coloque o valor de Fahrenheit:  "); 
	scanf("%f", &fa);
 
    ce = (5 * (fa-32) / 9);
 
    printf("O valor em celsius e de:  %f", ce);
 
    return(0);
}
