import java.util.Scanner;

public class atividade17 {
    public static void main(String[] args) {
        var entrada = new Scanner(System.in);
        boolean continuar = true;


        while (continuar){
            System.out.println("---------------------------------");
            System.out.println("-----Calculador De Logaritmo-----");
            System.out.println("---------------------------------");

            System.out.println("Digite um numero: ");
            var n1 = Double.parseDouble(entrada.nextLine());

            System.out.println("Digite a base do Logaritmo: ");
            var base1 = Double.parseDouble(entrada.nextLine());


            double resultado = Math.log(n1) / Math.log(base1);

            System.out.println("O Logaritmo de "+n1+" e "+base1+" é "+String.format("%.2f", resultado));

            System.out.println("Você deseja calcular mais um Logaritmo????");
            var resposta = entrada.nextLine();

            if(resposta.equals("Não") || resposta.equals("não") || resposta.equals("NÂO") || resposta.equals("nao")){
                System.out.println("Saindo do Sistema.....");
                continuar = false;
            }
        }
    }
}