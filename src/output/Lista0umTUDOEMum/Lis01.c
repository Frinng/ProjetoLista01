#include <stdio.h>
#include <math.h>

void dezprimeiros(){

    int escolha;

    do{
        printf("=============================================\n");
        printf("=========As Dez primeiras atividades=========\n");
        printf("=============================================\n");

        printf("Escolha Quais Atividades Voce Deseja Ver: \n");
        printf("1-Atividade 01.\n");
        printf("2-Atividade 02.\n");
        printf("3-Atividade 03.\n");
        printf("4-Atividade 04.\n");
        printf("5-Atividade 05.\n");
        printf("6-Atividade 06.\n");
        printf("7-Atividade 07.\n");
        printf("8-Atividade 08.\n");
        printf("9-Atividade 09.\n");
        printf("10-Atividade 10.\n");
        printf("11-Voltar.\n");
        printf("Escolha uma das opcoes.\n");
        scanf("%d", &escolha);

        switch (escolha){
            case 1: {
                system("cls");
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
                system("cls");
                float n1,n2,result;
    
                printf("\n=============================================");
                printf("\n================Divisor Online===============");
                printf("\n=============================================");
            
                printf("\nDigite um numero:  ");
                scanf("%f",&n1);
            
                printf("Digite um segundo numero:  ");
                scanf("%f",&n2);
            
                result= n1 / n2;
            
            
                printf("%.1f dividido por %.1f = %.1f\n",n1,n2,result);
                break;}
            case 3: {
                system("cls");
                int n1,n2,n3,n4,result;;
    
                printf("\n=============================================");
                printf("\n==============Calculador Online==============");
                printf("\n=============================================");
            
                printf("\nDigite um numero:  ");
                scanf("%d",&n1);
            
                printf("\nDigite um segundo numero:  ");
                scanf("%d",&n2);
            
                printf("\nDigite um terceiro numero:  ");
                scanf("%d",&n3);
            
                printf("\nDigite um quarto numero:  ");
                scanf("%d",&n4);
            
            
                result= n1 + n2 + n3 + n4;
            
            
                printf("%d + %d + %d + %d = %d\n",n1,n2,n3,n4,result);
                break;}  
            case 4: {
                system("cls");
                float n1,n2,n3,result;
    
                printf("\n=============================================");
                printf("\n=============Calculador de Media=============");
                printf("\n=============================================");
            
                printf("\nDigite uma nota:  ");
                scanf("%f",&n1);
            
                printf("\nDigite uma segunda nota:  ");
                scanf("%f",&n2);
            
                printf("\nDigite uma terceira nota:  ");
                scanf("%f",&n3);
            
                result= (n1+n2+n3) / 3;
            
            
                printf("Sua Media e %.1f\n",result);
                break;}
            case 5: {
                system("cls");
                float salario,umporcento,aumento,aumentoporcento,salariofinal;

                printf("\n=============================================");
                printf("\n============Calculador de Aumento============");
                printf("\n=============================================");
            
                printf("\nDigite seu salario:  ");
                scanf("%f",&salario);
            
                printf("\nDigite quantos porcentos voce ganhou de aumento:  ");
                scanf("%f",&aumento);
            
                umporcento= ( salario / 100);
                aumentoporcento= ( aumento * umporcento);
            
                salariofinal= salario + aumentoporcento;
            
                printf("\nSeu salario final com um aumento em %.1f e %.1f\n",aumentoporcento,salariofinal);
                break;} 
            case 6: {
                system("cls");
                int altura,base,area;

                printf("\n=============================================");
                printf("\n====Calculado de area de Triangulos Online===");
                printf("\n=============================================");
            
                printf("\nDigite a altura do triangulo:  ");
                scanf("%d",&altura);
            
                printf("\nDigite a base  do triangulo:  ");
                scanf("%d",&base);
            
                area= (base * altura) / 2;
            
            
                printf("\nA area do seu triangulo com %d de alura e %d de base e %d\n",altura,base,area);     
            break;}
            case 7: {
                system("cls");
                char nome[60];
                int idade;
            
                printf("\n=============================================");
                printf("\n==============Bot De Boas Vindas=============");
                printf("\n=============================================");
            
                printf("\nDigite seu nome:  ");
                scanf("%s", nome);
            
                printf("\nDigite sua idade: ");
                scanf("%d",&idade);
            
                printf("\nOla %s,prazer em te conhecer!!!\n",nome); 
            break;}
            case 8:{
                system("cls");
                int n1,n2,result;

                printf("\n=============================================");
                printf("\n==============Calculadora Online=============");
                printf("\n=============================================");

                printf("\nDigite um numero:  ");
                scanf("%d",&n1);

                printf("\nDigite um segundo numero:  ");
                scanf("%d",&n2);

                if(n1 > 0 && n2 > 0){
                    result = pow(n1,n2);

                    printf("\nO resultado de %d elevado  %d e %d\n",n1,n2,result);
                }else{
                        printf("\nOS DOIS NUMEROS DIGITADOS PRECISAM SER MAIOR QUE 0\n");
                }
            break;}
            case 9:{
                system("cls");
                int idade,idadefutura,ano,anofuturo,restodeano;
                char nome[50];


                printf("\n=============================================");
                printf("\n=============Advinhador de idade=============");
                printf("\n=============================================");

                printf("\n Digite seu nome: ");
                scanf("%s", nome);

                printf("\nQual a sua idade?");
                scanf("%d", &idade);

                printf("\nDigite o ano que estamos: ");
                scanf("%d", &ano);

                printf("\nDigite o ano futuro que vc deseja ver a sua idade: ");
                scanf("%d", &anofuturo);

                restodeano = anofuturo- ano;
                idadefutura = restodeano + idade;


                if (idade >= 18){
                    printf("Voce e maior de idade\n");
                    printf("\nSua idade e %d\n",idade);
                    printf("%s,em %d,voce tera %d anos\n",nome,ano,idadefutura); 
                }else{
                    printf("Voce e menor de idade\n");
                    printf("\nSua idade e %d\n",idade);
                    printf("%s,em %d,voce tera %d anos\n",nome,ano,idadefutura); 
                }   
            break;}
            case 10: {
                system("cls");
                float pesoatual,pesoantigo,pesoumporcento,calculo;

                printf("\n============================================="); 
                printf("\n=============Calculador de Peso==============");
                printf("\n============================================="); 

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
                    printf("\nVoce emagreceu %.1f porcento\n",pesoumporcento);
                }
            break;}
            default:
                printf("Opcao invalida. Tente novamente.\n");
            break; 
        }
    }while(escolha != 11); 

}
void dezaovinte(){
    int escolha;
    do {
        printf("=============================================\n");
        printf("=============Atividades 11 a 20==============\n");
        printf("=============================================\n");

        printf("Escolha Quais Atividades Voce Deseja Ver: \n");
        printf("1-Atividade 11.\n");
        printf("2-Atividade 12.\n");
        printf("3-Atividade 13.\n");
        printf("4-Atividade 14.\n");
        printf("5-Atividade 15.\n");
        printf("6-Atividade 16.\n");
        printf("7-Atividade 17.\n");
        printf("8-Atividade 18.\n");
        printf("9-Atividade 19.\n");
        printf("10-Atividade 20.\n");
        printf("11-Voltar.\n");
        printf("Escolha uma das opcoes.\n");
        scanf("%d", &escolha);

        switch(escolha){
            case 1: {
                system("cls");
                int number, Result;
                printf("\nVamos fazer um calculo!!! ");
                printf("\nDigite um numero: ");
                scanf("%d", &number);

                Result = number + number;

                printf("O resultado da soma desse numero e : %d\n", Result );

            break;}
            case 2: {
                system("cls");
                int Dista, combus;
                float media;
                printf("\nOla, Vamos cacalcular o consumo medio do seu veiculo. ");
                printf("\nDigite a distancia que seu veiculo percorreu: ");
                scanf("%d",&Dista);
                printf("\nDigite o combustivel que seu veiculo consumiu: ");
                scanf("%d",&combus);
                media = Dista / combus ;
                printf("A media de consumo e de %f\n", media);
            break;}
            case 3: {
                system("cls");
                char nome[30];
                float salario, vendas, comissao, salariofinal;

                printf("\nOlá! Chegou a hora do dia mais feliz do mês!!!\nSiga as orientações para receber seu salário.\n");

                printf("\nDigite seu nome: ");
                scanf("%s", nome);  // Não precisa de & para strings

                printf("\nDigite seu salário mensal: ");
                scanf("%f", &salario);

                printf("\nDigite seu número de vendas no mês: ");
                scanf("%f", &vendas);

                comissao = vendas * 0.15;
                salariofinal = salario + comissao;

                printf("\n--- RESUMO ---\n");
                printf("Nome: %s\n", nome);
                printf("Salário fixo: R$ %.2f\n", salario);
                printf("Salário total com comissão: R$ %.2f\n", salariofinal);
            break;}
        }

    }while(escolha != 11);
}
int main(){
    int escolha;
    do{
        

        printf("=============================================\n");
        printf("============Lista 01 Refeita em C============\n");
        printf("=============================================\n");

        printf("Escolha quais atividades voce deseja ver: \n");
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
                dezaovinte();
            
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