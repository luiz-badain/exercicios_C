//4.Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>
#include <math.h>
int main() {
    
    float largura,area,dobro;
    
    printf("coloque a largura do quadrado:");
    scanf("%f",&largura);
    
    area = largura*largura;
    dobro = area *2;
    
    printf("\n A area do quadrado e:  %.2f",area);
    printf("\n O dobro da area e:  %.2f",dobro);
    
    return 0;
}