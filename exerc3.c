#include <stdio.h>

int main() {
   int numero1, numero2, numero3;
   int a, b, c;
   
    printf("Digite o primeiro lado (-1 para sair): ");
    scanf("%d", &numero1);
    
    while(numero1 != -1){
        printf("Digite o segundo lado: ");
        scanf("%d", &numero2);
    
        printf("Digite o terceiro lado: ");
        scanf("%d", &numero3);
        
        if(numero1 >= numero2){
            if(numero1 >= numero3){
                c = numero1;
                a = numero2;
                b = numero3;
            } else{
                c = numero3;
                a = numero2;
                b = numero1;
            }
        }
        
        if(numero2 >= numero1){
            if(numero2 >= numero3){
                c = numero2;
                a = numero3;
                b = numero1;
            } else{
                c = numero3;
                a = numero2;
                b = numero1;
            }
        }
        
        
        if(numero1 >= numero2){
            if(numero2 >= numero3){
                c = numero1;
                a = numero3;
                b = numero2;
            } else{
                c = numero3;
                a = numero2;
                b = numero1;
            }
        }   
           
        if( c * c == a * a + b * b){
            printf("Triangulo Retangulo\n");
        } else{
            printf("Não é triangulo retangulo\n");
        }
        
        printf("Digite o primeiro lado (-1 para sair): ");
        scanf("%d", &numero1);
    } /*while*/
  return 0;
}  
