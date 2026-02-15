import java.util.*;

public class PrintingName {
    public static void myName(String args){
        System.out.println("Welcome "+ args);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        myName(name);
    }
}
