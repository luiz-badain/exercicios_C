// 3.Faça um Programa que peça o raio de um círculo, calcule e mostre sua área

#include <stdio.h>
#include <math.h>
 
int main(void)
{
	float raio, pi=3.14, area;
	
	printf("coloque o valor do raio = "); 
	scanf("%f", &raio);
 
	area = pi * raio * raio;
 
	printf("A sua area e de e = %.2f m2 \n", area);
 
	return 0;
}