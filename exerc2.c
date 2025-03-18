#include <stdio.h>

int main() {
   float nota, soma = 0;
   int contador = 0;
   
   
    printf("Digite as notas (-5 para encerrar): ");
    scanf("%f", &nota);

    while( nota != -5) {
    soma += nota;
    contador += 1;
    printf("Digite outra nota: ");
    scanf("%f", &nota);
    }
    
    printf("A media é : %.2f", soma / contador);
    
  return 0;
}  