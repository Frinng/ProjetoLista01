#include <stdio.h>

int main(int argc, char const *argv[])
{
   int i,contador,soma;
    printf("\n================================"); 
    printf("\n========Contador Online=========");
    printf("\n================================"); 

    printf("\nDigite um numero (MAIOR QUE 1): ");
    scanf("%d", &contador);
    soma = 0;
    if (contador > 1){
        for (i = 1;i <= contador;i++){
            printf("\nO contador esta no numero: %d",i);
            soma += i;
            printf("\nO resultado da soma ate agora: %d", soma);
        }
    }else{
        printf("\nDigite um numero maior que 1");
    }
}
