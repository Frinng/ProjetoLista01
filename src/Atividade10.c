#include <stdio.h>

int main(int argc, char const *argv[])
{
    float pesoatual,pesoantigo,pesoumporcento,calculo;

    printf("================================"); 
    printf("=======Calculador de Peso=======");
    printf("================================"); 

    printf("\nDigite seu Peso Atual: ");
    scanf("%f", &pesoatual);

    printf("\nDigite seu peso antigo: ");
    scanf("%f", &pesoantigo);

    if (pesoatual > pesoantigo){
        pesoumporcento = ((pesoatual - pesoantigo) / pesoantigo) * 100;
        calculo = pesoatual - pesoantigo;
        printf("\nVoce engordou %.1f kilos", calculo);
        printf("\nVoce engordou %.1f porcento",pesoumporcento);

    }else{
        calculo = pesoantigo - pesoatual;
        pesoumporcento = ((pesoantigo - pesoatual) / pesoantigo) * 100;
        printf("\nVoce emagreceu %.1f kilos", calculo);
        printf("\nVoce emagreceu %.1f porcento",pesoumporcento);
    }
}
