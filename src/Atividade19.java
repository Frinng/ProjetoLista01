import java.util.Scanner;

public class Atividade19 {
    public static void main(String[] args) {
        var entrada = new Scanner(System.in);
        boolean continuar = true;
        double salarioMin = 1518;
        while (continuar){
            System.out.println("----------------------------------------");
            System.out.println("--------Calculador de quilowatts--------");
            System.out.println("----------------------------------------");
            System.out.println("O salario minimo é R$"+salarioMin);

            System.out.println("Digite a quantidade de quilowatts consumidos");
            var qiloConsumido = Double.parseDouble(entrada.nextLine());

            double valor100Qilo = salarioMin / 7;
            double valorPorQilo = valor100Qilo / 100;

            double valortotal = valorPorQilo * qiloConsumido;
            double valorcomdesconto = valortotal * 0.9;


            System.out.println("O valor de quilowatt: R$"+String.format("%.2f", valorPorQilo));
            System.out.println("Valor total a ser pago: R$"+String.format("%.2f", valortotal));
            System.out.println("Valor com 10%% de desconto: R$"+String.format("%.2f", valorcomdesconto));

            System.out.println("Voce deseja calcular mais quilowatts? ");
            var resposta = entrada.nextLine();

            if(resposta.equals("Não") || resposta.equals("NÃO") || resposta.equals("não") || resposta.equals("nao")){
                System.out.println("Saindo Do sistema.....");
                continuar = false;
            }
        }
    }
}
