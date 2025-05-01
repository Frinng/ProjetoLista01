#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1,n2,n3;

    printf("\n================================="); 
    printf("\n==========Atividade 26===========");
    printf("\n================================="); 

    printf("\nDigite um numero: ");
    scanf("%d", &n1);

    printf("\nDigite um segundo numero: ");
    scanf("%d", &n2);

    printf("Digite um terceiro numero: ");
    scanf("%d", &n3);

    if (n1 % n2 == 0 || n1 % n3 == 0){
        printf("O numero %d e divisivel por %d e por %d",n1,n2,n3);
    }else if (n1 % n2 == 0)
    {
        printf("O numero %d e divisivel por %d",n1,n2);
    }else if (n1 % n3 == 0)
    {
        printf("O numero %d e divisivel por %d",n1,n3);
    }else{
        printf("O numero %d nao e divisivel por nenhum numero", n1);
    }    
    return 0;
}