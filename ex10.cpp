/* 10.Faça um programa que peça o tamanho de um arquivo para download (em MB) 
e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos). */

#include <stdio.h>
#include <math.h>
int main() {
    float tamanhoArq,velocidadeLink,tempo,minutos;
    
    printf("Coloque o tamanho do arquivo de download em MB: ");
    scanf("%f",&tamanhoArq);
    printf("\n Coloque a velocidade do link em Mbps: ");
    scanf("%f",&velocidadeLink);
    
    tempo=tamanhoArq/velocidadeLink;
    minutos=tempo/60;
    
    printf("\nO tempo aproximado de download do arquivo em minutos sera: %.2f",minutos);
    
    return 0;
}