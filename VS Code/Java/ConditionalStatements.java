import java.util.Scanner;

public class ConditionalStatements {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // If Else

        int age = sc.nextInt();
        if(age > 18)
            System.out.println("Adult");
        else
            System.out.println("Not an Adult");

        int a = sc.nextInt();
        int b = sc.nextInt();
        if(a == b) System.out.println("Equal");
        else if(a > b) System.out.println("A is greater");
        else System.out.println("A is lesser");

        //Switch
        int number = sc.nextInt();
        switch(number){
            case 1: 
                System.out.println("Hello");
                break;
            case 2:
                System.out.println("Namate");
                break;
            case 3:
                System.out.println("Bonjour");
            default:
                System.out.println("Enter correct value!!");  
        }
    }
}
