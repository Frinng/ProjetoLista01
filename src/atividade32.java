import java.util.Scanner;

public class atividade32 {
    public static void main(String[] args) {
        var entrada = new Scanner(System.in);
        var continuar = true;

        while (continuar){
            System.out.println("-----------------------------");
            System.out.println("----Consulta de Categoria----");
            System.out.println("-----------------------------");

            System.out.println("Digite a idade do competidor: ");
            var idade = Integer.parseInt(entrada.nextLine());

            if(idade >= 5 && idade <= 7){
                System.out.println("O participante faz parte da categoria: Infantil A");
            } else if (idade >= 8 && idade <= 10) {
                System.out.println("O participante faz parte da categoria: Infantil B");
            } else if (idade >= 11 && idade <= 13) {
                System.out.println("O participante faz parte da categoria: Juvenil A");
            } else if (idade >= 14 && idade <= 17) {
                System.out.println("O participante faz parte da categoria: Juvenil B");
            } else if (idade >= 18) {
                System.out.println("O participante faz parte da categoria: Sênior");
            } else if (idade < 5) {
                System.out.println("O participante deve maior de 5 anos");
            }

            System.out.println("Voce deseja consultar a categoria de mais um participante? ");
            var resposta = entrada.nextLine();
            if (resposta.equals("não") || resposta.equals("NÃO") || resposta.equals("Não") || resposta.equals("nao")){
                System.out.println("Saindo do sistema..");
                continuar = false;
            }
        }
    }
}
