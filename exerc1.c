#include <stdio.h>

int main() {
    
   float nota, media, total = 0;
   int contador = 0;
   
   while (contador < 4){
       printf("Digite a nota: ");
       scanf("%f", &nota);
       total= total + nota;
       contador = contador + 1;
   }

    media = total / 3;
    printf("A media da nota é: %.2f", media);
  return 0;
}  