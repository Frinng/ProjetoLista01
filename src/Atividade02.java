import java.util.Scanner;

public class Atividade02 {
    public static void main(String[] args) {
        var input = new Scanner(System.in);

        System.out.println("Digite um numero: ");
        var n1 = Double.parseDouble(input.nextLine());

        System.out.println("Digite um segundo numero: ");
        var n2 = Double.parseDouble(input.nextLine());

        var result = n1 / n2;

        if(n1 != 0 && n2 != 0){
            System.out.println(n1+" ÷ "+n2+" = "+result);
        }else{
            System.out.println("Digite um numero que não seja 0");
        }
    }
}
