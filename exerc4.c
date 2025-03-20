#include <stdio.h>

int main() {

float raio, diametro, circunferencia, area;

printf("Digite o raio do circulo: ");
scanf("%f", &raio);

diametro = raio * 2;
circunferencia = (3.1415 * 2) * raio;
area = (raio * raio) * 3.1415;

printf("O raio é: %f\n", raio);
printf("o diametro é: %f\n", diametro);
printf("a circunferencia é: %f\n", circunferencia);
printf("A área é: %f\n", area);
   
  return 0;
}  