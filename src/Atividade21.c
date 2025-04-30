#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1,metade;
    printf("\n================================="); 
    printf("\n==========Atividade 21===========");
    printf("\n================================="); 

    printf("\nDigite um numero: ");
    scanf("%d", &n1);

    if (n1 > 20){
        printf("\n%d e maior que 20",n1);
        metade = n1 / 2;
        printf("\nA metade de %d e %d",n1,metade);
    }else{
        printf("%d nao e maior que 20",n1);
    }

}