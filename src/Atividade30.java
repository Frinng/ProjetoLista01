import java.util.Scanner;

public class Atividade30 {
    public static void main(String[] args) {
        var entrada = new Scanner(System.in);
        boolean continuar = true;

        while (continuar){
            System.out.println("-------------------------");
            System.out.println("------Atividade 30-------");
            System.out.println("-------------------------");

            System.out.println("Digite um numero: ");
            var n1 = Integer.parseInt(entrada.nextLine());

            System.out.println("Digite um segundo numero: ");
            var n2 = Integer.parseInt(entrada.nextLine());

            System.out.println("Digite um terceiro numero: ");
            var n3 = Integer.parseInt(entrada.nextLine());

            int maiornum = Math.max(n1, Math.max(n2 ,n3));

            System.out.println("O maior numero é "+maiornum);

            System.out.println("Deseja saber qual o numero é maior novamente? ");
            var resposta = entrada.nextLine();

            if(resposta.equals("Não") || resposta.equals("NÃO") || resposta.equals("não") || resposta.equals("nao")){
                System.out.println("Saindo do Sistema......");
                continuar = false;
            }
        }
    }
}
