/* 8.Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o o produto do dobro do primeiro com metade do segundo.
o a soma do triplo do primeiro com o terceiro. o o terceiro elevado ao cubo.*/

#include <stdio.h>
#include <math.h>
int main() {
    int nu1,nu2;
    float nu3,dobro,triplo,elevado;
    
    printf("Informe um numero inteiro:");
    scanf ("%i",&nu1);
    printf ("\nInforme um numero inteiro:");
    scanf ("%i",&nu2);
    printf ("\nInforme um numero real:");
    scanf ("%f",&nu3);
    
    dobro = (2*nu1)*(nu2/2);
    triplo = (3*nu1)+nu3;
    elevado = nu3*nu3*nu3;
    
    printf("\n\nO produto do dobro do primeiro com metade do segundo e igual a:  %.2f",dobro);
    printf("\nA soma do triplo do primeiro com o terceiro e igual a:  %.2f",triplo);
    printf("\nO terceiro elevado ao cubo e igual a:  %.2f",elevado);
    
    return 0;
}