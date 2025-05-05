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
                printf("\n=================Atividade 1=================");
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
                printf("\n=================Atividade 2=================");
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
                printf("\n=================Atividade 3=================");
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
                printf("\n=================Atividade 4=================");
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
                printf("\n=================Atividade 5=================");
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
                printf("\n=================Atividade 6=================");
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
                printf("\n=================Atividade 7=================");
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
                printf("\n=================Atividade 8=================");
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
                printf("\n=================Atividade 9=================");
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
                printf("\n================Atividade 10=================");
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
            case 11:
                system("cls");
                printf("\n Saindo do Sistema\n");
                break;
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

                printf("\n============================================="); 
                printf("\n================Atividade 11=================");
                printf("\n============================================="); 


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

                printf("\n============================================="); 
                printf("\n================Atividade 12=================");
                printf("\n============================================="); 

                printf("\nOla, Vamos cacalcular o consumo medio do seu veiculo. ");
                printf("\nDigite a distancia que seu veiculo percorreu: ");
                scanf("%d",&Dista);
                printf("\nDigite o combustivel que seu veiculo consumiu: ");
                scanf("%d",&combus);
                media = Dista / combus ;
                printf("A media de consumo e de %.1f\n", media);
            break;}
            case 3: {
                system("cls");
                char nome[30];
                float salario, vendas, comissao, salariofinal;

                printf("\n============================================="); 
                printf("\n================Atividade 13=================");
                printf("\n============================================="); 

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
            case 4: {
                system("cls");
                int nota1,nota2,nota3;
                float media;

                printf("\n============================================="); 
                printf("\n================Atividade 14=================");
                printf("\n============================================="); 

                printf ("\nOla, Vamos calcular a sua nota nas provas!!! ");
                printf("\nDigite sua primeira nota : ");
                scanf("%d", &nota1);
                printf("\nDigite sua segunda nota: ");
                scanf("%d", &nota2);
                printf ("\nDigite sua terceira nota: ");
                scanf("%d", &nota3);
                media = (nota1 + nota2 + nota3) / 3;
                printf("Sua media nas provas foram %.2f\n", media );
                if  (media <7) {
                printf("\nReprovado\n");

                }else {
                    printf("\nAprovado\n");
                }
                break;}
            case 5: {
                system("cls");
                int nota1,nota2,nota3;
                float media;

                printf("\n============================================="); 
                printf("\n================Atividade 15=================");
                printf("\n============================================="); 

                printf ("\nOla, Vamos calcular a sua nota nas provas!!! ");
                printf("\nDigite sua primeira nota : ");
                scanf("%d", &nota1);
                printf("\nDigite sua segunda nota: ");
                scanf("%d", &nota2);
                printf ("\nDigite sua terceira nota: ");
                scanf("%d", &nota3);
                media = (nota1 + nota2 + nota3)/3;
                printf("Sua media nas provas foram %.2f", media );
                if  (media <5) {
                    printf("\nReprovado\n");


                }else if (media > 5 && media  < 7){
                printf("\nRecuperacao\n");
                }

                else {
                    printf("\nAprovado\n");
                }
            break;}
            case 6: {
                system("cls");
                int num, ter;

                printf("\n============================================="); 
                printf("\n================Atividade 16=================");
                printf("\n============================================="); 

                printf("\nVamos calcular a terceira parte do numero\n");
                printf("\nDigite o numero: ");
                scanf("%d", &num);
                ter = num /3 ;
                printf ("\n A terceira parte do numero e %d\n",ter);
            break;}
            case 7: {
                system("cls");
                double numero, base, resultado;

                printf("\n============================================="); 
                printf("\n================Atividade 17=================");
                printf("\n============================================="); 

                printf("\nDigite o numero: ");
                scanf("%lf", &numero);

                printf("\nDigite a base do logaritmo: ");
                scanf("%lf", &base);

                if (numero > 0 && base > 0 && base != 1) {
                    resultado = log(numero) / log(base); // Mudança de base
                    printf("\nLogaritmo de %.2f na base %.2f é: %.4f\n", numero, base, resultado);
                } else {
                    printf("\nNumero e base devem ser positivos e a base diferente de 1.\n");
                }
            break;}
            case 8: {
                system("cls");
                int num, quadrado, raiz;

                printf("\n=============================================\n"); 
                printf("\n================Atividade 18=================\n");
                printf("\n=============================================\n"); 

                printf("\nOla, vamos fazer um calculo!! \n");
                printf("\n Digite um numero: ");
                scanf("%d",&num);
                quadrado = num*num;
                raiz = quadrado / 2;
                printf("\nO numero e: %d\n", num);
                printf("\nO quadrado do numero e: %d\n" , quadrado);
                printf("\nA raiz do numero e: %d\n", raiz);

            break;}
            case 9: {
                system("cls");
                float salarioMinimo, qtdQuilowatts;
                float valorPorQuilowatt, valorTotal, valorComDesconto;

                printf("\n=============================================\n"); 
                printf("\n================Atividade 19=================\n");
                printf("\n=============================================\n"); 

                printf("\nDigite o valor do salario minimo: R$ ");
                scanf("%f", &salarioMinimo);

                printf("\nDigite a quantidade de quilowatts consumidos: ");
                scanf("%f", &qtdQuilowatts);

                valorPorQuilowatt = salarioMinimo / 7 / 100;
                valorTotal = valorPorQuilowatt * qtdQuilowatts;
                valorComDesconto = valorTotal * 0.9;

                printf("\nValor de cada quilowatt: R$ %.2f", valorPorQuilowatt);
                printf("\nValor total a ser pago: R$ %.2f", valorTotal);
                printf("\nValor com 10% de desconto: R$ %.2f\n", valorComDesconto);

            break;}
            case 10: {
                system("cls");
                float raio, perimetro , area ;

                printf("\n=============================================\n"); 
                printf("\n================Atividade 20=================\n");
                printf("\n=============================================\n"); 

                printf("\nVamos calucular um raio de um circulo!");
                printf("\nDigite o raio: ");
                scanf("%f", &raio);
                perimetro= 2 * 3.14 *raio;
                area= raio * raio;
                printf("Seu perimetro e: %.1f\n", perimetro);
                printf("Sua area e: %.1f\n" ,area);
            break;}
            case 11:
                system("cls");
                printf("\n Saindo do Sistema\n");
                break;    
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
            }  
}while(escolha != 11);
}
void vinteaotrinta(){
    int escolha;
    do {
        printf("=============================================\n");
        printf("=========As Dez primeiras atividades=========\n");
        printf("=============================================\n");

        printf("Escolha Quais Atividades Voce Deseja Ver: \n");
        printf("1-Atividade 21.\n");
        printf("2-Atividade 22.\n");
        printf("3-Atividade 23.\n");
        printf("4-Atividade 24.\n");
        printf("5-Atividade 25.\n");
        printf("6-Atividade 26.\n");
        printf("7-Atividade 27.\n");
        printf("8-Atividade 28.\n");
        printf("9-Atividade 29.\n");
        printf("10-Atividade 30.\n");
        printf("11-Voltar.\n");
        printf("Escolha uma das opcoes.\n");
        scanf("%d", &escolha);

        switch(escolha){

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