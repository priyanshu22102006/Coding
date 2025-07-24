import java.util.Scanner;

public class Hello_World {
    public static void main(String[] args) {
        //Output

        System.out.println("Hello World");
        System.out.print("Hello World\n");
        System.out.print("Hello World");
        System.out.println("Hello World");

        //Input
        
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name;
        name = sc.nextLine();
    }
}