#include <stdio.h>

int main(){

  float metros, centimetros;

  printf("Coloque o valor do metro:  ");
  scanf("%f", &metros);
 
  centimetros = metros * 100;

  printf(" O valor de metros convertidos em centrimetros e: %.1f cm", centimetros);

  return 0;
}