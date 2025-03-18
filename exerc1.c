#include <stdio.h>

int main() {
   float nota, media, total = 0;
   int fim = 3;
   int contador = 0;
   
   while (contador <= fim){
       printf("Digite a nota: ");
       scanf("%f", &nota);
       total= total + nota;
       contador = contador + 1;
   }

    media = total / fim;
    printf("A media da nota é: %.2f", media);
  return 0;
}  
