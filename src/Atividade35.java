import java.util.Scanner;

public class Atividade35 {
    public static void main(String[] args) {
        var entrada = new Scanner(System.in);
        var continuar = true;

        while (continuar){
            System.out.println("--------------------------------");
            System.out.println("-----CALCULADOR DE QUADRADO-----");
            System.out.println("--------------------------------");

            System.out.println("Digite um numero: ");
            var n1 = Integer.parseInt(entrada.nextLine());

            System.out.println("Digite um segundo numero: ");
            var n2 = Integer.parseInt(entrada.nextLine());

            System.out.println("Digite um terceiro numero: ");
            var n3 = Integer.parseInt(entrada.nextLine());

            System.out.println("Digite um Quarto Numero: ");
            var n4 = Integer.parseInt(entrada.nextLine());

            System.out.println("Digite um quinto numero: ");
            var n5 = Integer.parseInt(entrada.nextLine());

            var quadrado1 = n1 * n1;
            var quadrado2 = n2 * n2;
            var quadrado3 = n3 * n3;
            var quadrado4 = n4 * n4;
            var quadrado5 = n5 * n5;

            System.out.println(" O quadrado de "+n1+" é "+quadrado1);
            System.out.println(" O quadrado de "+n2+" é "+quadrado2);
            System.out.println(" O quadrado de "+n3+" é "+quadrado3);
            System.out.println(" O quadrado de "+n4+" é "+quadrado4);
            System.out.println(" O quadrado de "+n5+" é "+quadrado5);

            System.out.println("Deseja ver o quadrado de mais cinco numeros? ");
            var resposta = entrada.nextLine();

            if(resposta.equals("Não") || resposta.equals("NÃO") || resposta.equals("não") || resposta.equals("nao")){
                System.out.println("Saindo do sistema.....");
                continuar = false;
            }
        }
    }
}
