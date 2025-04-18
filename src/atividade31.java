import java.util.Scanner;

public class atividade31 {
    public static void main(String[] args) {
        var entrada = new Scanner(System.in);
        var continuar = true;

        while (continuar){
            System.out.println("----------------------------");
            System.out.println("--------Atividade 31--------");
            System.out.println("----------------------------");

            System.out.println("Digite um numero: ");
            var n1 = Integer.parseInt(entrada.nextLine());

            System.out.println("Digite um segundo numero: ");
            var n2 = Integer.parseInt(entrada.nextLine());

            System.out.println("Digite um terceiro numero: ");
            var n3 = Integer.parseInt(entrada.nextLine());

            if(n1 >= n2 && n1 >= n3){
                if(n2 >= n3){
                    System.out.println("1- "+n1);
                    System.out.println("2- "+n2);
                    System.out.println("3- "+n3);
                } else {
                    System.out.println("1- "+n1);
                    System.out.println("2- "+n3);
                    System.out.println("3- "+n2);
                }
            }
            else if (n2 >= n1 && n2 >= n3) {
                if(n1 > n3){
                    System.out.println("1- "+n2);
                    System.out.println("2- "+n1);
                    System.out.println("3- "+n3);
                }else {
                    System.out.println("1- "+n2);
                    System.out.println("2- "+n3);
                    System.out.println("3- "+n1);
                }
            }
            else{
                if (n1 >= n2){
                    System.out.println("1- "+n3);
                    System.out.println("2- "+n1);
                    System.out.println("3- "+n2);
                }else {
                    System.out.println("1- "+n3);
                    System.out.println("2- "+n2);
                    System.out.println("3- "+n1);
                }
            }

            System.out.println("Voce deseja ver a Ordem Decrescente de mais algum numero? ");
            var resposta = entrada.nextLine();

            if(resposta.equals("Não") || resposta.equals("não") || resposta.equals("NÃO") || resposta.equals("nao")) {
                System.out.println("Saindo do sistema....");
                continuar = false;
            }
        }
    }
}