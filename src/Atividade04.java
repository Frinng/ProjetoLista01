import java.util.Scanner;

public class Atividade04 {
    public static void main(String[] args) {
        var entrada = new Scanner(System.in);

        System.out.println("Digite a primeira nota: ");
        var nota1 = Double.parseDouble(entrada.nextLine());

        System.out.println("Digite a segunda nota: ");
        var nota2 = Double.parseDouble(entrada.nextLine());

        System.out.println("Digite a terceira nota: ");
        var nota3 = Double.parseDouble(entrada.nextLine());

        var result = (nota1 + nota2 + nota3) / 3;

        System.out.println("A sua media é "+result);

    }
}
