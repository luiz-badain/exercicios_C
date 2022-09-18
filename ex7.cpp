// 7. Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.

#include <stdio.h>
#include <math.h>

int main(void)
{
    float fa, ce;
 
    printf("Coloque o valor de  celsius:  "); 
	scanf("%f", &ce);
 
  	fa = (9 * ce + 160) / 5;
 
    printf("O valor em Fahrenheit e de:  %f", fa);
 
    return(0);
}
