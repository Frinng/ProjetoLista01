#include <stdio.h>
#include <math.h>

void dezprimeiros(){

    int escolha;

    do{
        printf("\n=============================================");
        printf("\n=========As Dez primeiras atividades=========");
        printf("\n=============================================");

        printf("\nEscolha Quais Atividades Voce Deseja Ver: ");
        printf("\n1-Atividade 01.");
        printf("\n2-Atividade 02.");
        printf("\n3-Atividade 03.");
        printf("\n4-Atividade 04.");
        printf("\n5-Atividade 05.");
        printf("\n6-Atividade 06.");
        printf("\n7-Atividade 07.");
        printf("\n8-Atividade 08.");
        printf("\n9-Atividade 09.");
        printf("\n10-Atividade 10.");
        printf("\n11-Voltar.");
        printf("Escolha uma das opcoes.\n");
        scanf("%d", &escolha);

        switch (escolha){
            case 1: {
                int numat1,numat2,resultat1;
            
                printf("\n=============================================");
                printf("\n=============Multiplicador Online============");
                printf("\n=============================================");
            
                printf("\nDigite um numero:  ");
                scanf("%d",&numat1);
            
                printf("\nDigite um segundo numero:  ");
                scanf("%d",&numat2);
            
                resultat1 = numat1 * numat2;
            
                printf("%d x %d = %d\n", numat1, numat2, resultat1);
                break;}
            case 2: {
                float n1,n2,result;
    
                printf("\n=============================================");
                printf("\n================Divisor Online===============");
                printf("\n=============================================");
            
                printf("Digite um numero:  ");
                scanf("%f",&n1);
            
                printf("Digite um segundo numero:  ");
                scanf("%f",&n2);
            
                result= n1 / n2;
            
            
                printf("%.1f dividido por %.1f = %.1f\n",n1,n2,result);
                break;}
            case 3: {
                int n1,n2,n3,n4,result;
    
                printf("\n=============================================");
                printf("\n==============Calculador Online==============");
                printf("\n=============================================");
            
                printf("Digite um numero:  ");
                scanf("%d",&n1);
            
                printf("Digite um segundo numero:  ");
                scanf("%d",&n2);
            
                printf("Digite um terceiro numero:  ");
                scanf("%d",&n3);
            
                printf("Digite um quarto numero:  ");
                scanf("%d",&n4);
            
            
                result= n1 + n2 + n3 + n4;
            
            
                printf("%d + %d + %d + %d = %d\n",n1,n2,n3,n4,result);
                break;}  
            case 4: {
                float n1,n2,n3,result;
    
                printf("\n=============================================");
                printf("\n=============Calculador de Media=============");
                printf("\n=============================================");
            
                printf("Digite uma nota:  ");
                scanf("%f",&n1);
            
                printf("Digite uma segunda nota:  ");
                scanf("%f",&n2);
            
                printf("Digite uma terceira nota:  ");
                scanf("%f",&n3);
            
                result= (n1+n2+n3) / 3;
            
            
                printf("Sua Media e %.1f",result);
                break;}
            case 5: {
                float salario,umporcento,aumento,aumentoporcento,salariofinal;
    
                printf("===================================\n");
                printf("=======Calculador de Aumento=======\n");
                printf("===================================\n");
            
                printf("\nDigite seu salario:  ");
                scanf("%f",&salario);
            
                printf("\nDigite quantos porcentos voce ganhou de aumento:  ");
                scanf("%f",&aumento);
            
                umporcento= ( salario / 100);
                aumentoporcento= ( aumento * umporcento);
            
                salariofinal= salario + aumentoporcento;
            
                printf("\nSeu salario final com um aumento em %.1f e %.1f",aumentoporcento,salariofinal);
                break;}    
                
        }
    }while(escolha != 11); 

}

int main(int argc, char const *argv[])
{
    int escolha;
    do{
        

        printf("\n=============================================");
        printf("\n============Lista 01 Refeita em C============");
        printf("\n=============================================");

        printf("Escolha quais atividades voce deseja ver: ");
        printf("1-Da 1 a 10.\n");
        printf("2-Da 11 a 20.\n");
        printf("3-Da 21 a 30.\n");
        printf("4-Da 31 a 41.\n");
        printf("5-Sair do sistema\n");
        printf("Escolha uma das Opcoes: \n");
        scanf("%d",&escolha);

        switch(escolha){
            case 1:
                system("clear");
                dezprimeiros();
                    
                break;
            case 2:
                system("clear");
            
                break;
            case 3:
                system("clear");
            
                break;
            case 4:
                system("clear");
            
                break;
            case 5:
                system("clear");

                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;    
        }   

    }while(escolha != 5);

    return 0;
}