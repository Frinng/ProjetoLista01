import java.util.Scanner;

public class Atividade03 {
    public static void main(String[] args) {
        var entrada = new Scanner(System.in);

        System.out.println("Digite um numero: ");
        var n1 = Integer.parseInt(entrada.nextLine());

        System.out.println("Digite um segundo numero: ");
        var n2 = Integer.parseInt(entrada.nextLine());

        System.out.println("Digite um terceiro numero: ");
        var n3 = Integer.parseInt(entrada.nextLine());

        System.out.println("Digite um quarto numero: ");
        var n4 = Integer.parseInt(entrada.nextLine());

        var result = n1 + n2 + n3 + n4;

        System.out.println(n1+" + "+n2+" + "+n3+" + "+n4+" + "+result);
    }
}
