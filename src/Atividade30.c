#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1,n2,n3;

    printf("\n================================="); 
    printf("\n==========Atividade 30===========");
    printf("\n================================="); 

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um segundo numero: ");
    scanf("%d", &n2);

    printf("Digite um terceiro numero: ");
    scanf("%d", &n3);

    if (n1 > n2 || n1 > n3){
        printf("%d e o maior numero.", n1);
    }else if (n2 > n1 || n2 > n3){
        printf("%d e o maior numero.", n2);
    }else{
        printf("%d e o maior numero.", n3);
    }
    
}