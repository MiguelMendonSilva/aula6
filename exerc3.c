#include <stdio.h>

int main() {
   int a, b, c;
   
   printf("Digite um números inteiro: ");
   scanf("%d\n %d\n %d", &a, &b, &c);
   
   if(a * a == b * b + c * c){
       printf("É possível formar um triangulo retangulo");
   }
   
   
  return 0;
}  