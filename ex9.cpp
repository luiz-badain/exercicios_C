// 9.Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) – 58
#include <stdio.h>
#include <math.h>

int main() {
   float altura,peso;
   
   printf("Coloque sua altura:");
   scanf ("%f",&altura);
   
   peso =(72.7 * altura) - 58;
   
   printf("\n O seu peso ideal e:  %.2f.",peso);
   
   return 0;
}