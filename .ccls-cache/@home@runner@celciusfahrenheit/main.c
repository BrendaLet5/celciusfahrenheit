#include <stdio.h>

// Ler a temperatura em celcius e converter para fahrenheit.Fórmula: (9*C+160)/5

int main(void) {
  float farenheit,celcius=0;
  printf("Digite a temperatura em celcius: ");
  scanf("%f",&celcius);
  farenheit= (9*celcius+160)/5;
  printf("A temperatura em farenheit é: %.2f",farenheit);
  
  return 0;
}