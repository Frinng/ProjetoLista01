#include <stdio.h>
#include <math.h>

void dezprimeiros(){

    int escolha;

    printf("\n=============================================");
    printf("\n=========As Dez primeiras atividades=========");
    printf("\n=============================================");

    printf("Escolha Quais Atividades Voce Deseja Ver: \n");
    printf("1-Atividade 01. \n");
    printf("2-Atividade 02. \n");
    printf("3-Atividade 03. \n");
    printf("4-Atividade 04. \n");
    printf("5-Atividade 05. \n");
    printf("6-Atividade 06. \n");
    printf("7-Atividade 07. \n");
    printf("8-Atividade 08. \n");
    printf("9-Atividade 09. \n");
    printf("10-Atividade 10. \n");
    printf("11-Voltar. \n");
    printf("Escolha uma das opcoes. \n");
    scanf("%d ", &escolha);

    switch (escolha){
        case 1:
        #include <stdio.h>
            int n1,n2,result;
        
            printf("============================\n");
            printf("====Multiplicador Online====\n");
            printf("============================\n");
        
            printf("Digite um numero:  ");
            scanf("%d",&n1);
        
            printf("Digite um segundo numero:  ");
            scanf("%d",&n2);
        
            result=n1*n2;
        
            printf("%d x %d = %d\n",n1,n2,result);
            break;
        case 2:
            float n1,n2,result;

            printf("============================\n");
            printf("=======Divisor Online=======\n");
            printf("============================\n");
    
            printf("Digite um numero:  ");
            scanf("%f",&n1);
    
            printf("Digite um segundo numero:  ");
            scanf("%f",&n2);
    
            result= n1 / n2;
    
    
            printf("%.1f dividido por %.1f = %.1f\n",n1,n2,result);
            break;
        case 3:
            int n1,n2,n3,n4,result;

            printf("===============================\n");
            printf("=======Calculador Online=======\n");
            printf("===============================\n");
    
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
            break;
        case 4:
            float n1,n2,n3,result;

            printf("=================================\n");
            printf("=======Calculador de Media=======\n");
            printf("=================================\n");
    
            printf("Digite uma nota:  ");
            scanf("%f",&n1);
    
            printf("Digite uma segunda nota:  ");
            scanf("%f",&n2);
    
            printf("Digite uma terceira nota:  ");
            scanf("%f",&n3);
    
            result= (n1+n2+n3) / 3;
    
    
            printf("Sua Media e %.1f",result);
            break;
        case 5:
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
            break;

    }


}


int main(int argc, char const *argv[])
{
    int escolha;

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
            system("cls");
            dezprimeiros();
                
            break;
        case 2:
            system("cls");
        
            break;
        case 3:
            system("cls");
        
            break;
        case 4:
            system("cls");
        
            break;
        case 5:
            system("cls");

            break;
    }

    return 0;
}