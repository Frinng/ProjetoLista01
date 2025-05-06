#include <stdio.h>

int main(){
    int idade;
    char nome[60];

    printf("--------------------------------------");
    printf("|        Cadastro de competidor      |");
    printf("--------------------------------------");

    printf("Digite o nome do competidor:  \n");
    scanf("%s",nome);

    printf("Digite a idade do competidor: \n");
    scanf("%d", &idade);        

    if(idade >= 5 && idade <= 7){
        printf("O participante %s faz parte da categoria: Infantil A", nome);
    } else if (idade >= 8 && idade <= 10) {
        printf("O participante %s faz parte da categoria: Infantil B", nome);
    } else if (idade >= 11 && idade <= 13) {
        printf("O participante %s faz parte da categoria: Juvenil A", nome);
    } else if (idade >= 14 && idade <= 17) {
        printf("O participante %s faz parte da categoria: Juvenil B", nome);
    } else if (idade >= 18) {
        printf("O participante %s faz parte da categoria: Sênior", nome);
    } else if (idade < 5) {
        printf("O participante deve maior de 5 anos");
    }

}