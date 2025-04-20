import java.util.Scanner;

public class Atividade01 {
    public static void main(String[] args) {
        var entrada = new Scanner(System.in);
        System.out.println("Digite um numero: ");
        var n1 = Integer.parseInt(entrada.nextLine());

        System.out.println("Digite um segundo numero: ");
        var n2 = Integer.parseInt(entrada.nextLine());

        var result = n1 * n2;

        System.out.println(n1+" x "+n2+" = "+result);

    }
}
