import java.util.Scanner;

public class atividade18 {
    public static void main(String[] args) {
        var entrada = new Scanner(System.in);
        boolean continuar = true;

        while (continuar){
            System.out.println("------------------------------------------");
            System.out.println("-----------Calculadora Do Pedro-----------");
            System.out.println("------------------------------------------");

            System.out.println("Digite um numero: ");
            var n1 = Integer.parseInt(entrada.nextLine());

            int quadrado = n1 * n1;

            System.out.println("O numero que voce digitou: "+n1);
            System.out.println("O quadrado de "+n1+" é "+quadrado);
            System.out.println("A raiz quadrada de "+quadrado+" é "+n1);

            System.out.println("Voce deseja calcular o quadrado de mais um numero? ");
            var resposta = entrada.nextLine();
            if(resposta.equals("Não") || resposta.equals("NÃO") || resposta.equals("não") || resposta.equals("nao")){
                System.out.println("Saindo Do Sistema...");
                continuar = false;
            }

        }



    }
}
