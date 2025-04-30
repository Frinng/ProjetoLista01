#include <stdio.h>

int main(int argc, char const *argv[])
{
   int i,fimcontador,iniciocontador;
    printf("\n================================"); 
    printf("\n========Contador Online=========");
    printf("\n================================"); 

    printf("\nDigite um numero para ser o inicio do contador: ");
    scanf("%d", &iniciocontador);

    printf("\nDigite um numero para ser o fim do contador: ");
    scanf("%d", &fimcontador);
    if (iniciocontador < fimcontador){
        for (i = iniciocontador;i <= fimcontador;i++){
            printf("\nO contador esta no numero: %d",i);
        }
    }else{
        for (i = iniciocontador;i >= fimcontador;i--){
            printf("\nO contador esta no numero: %d",i);
        }

    }
}
