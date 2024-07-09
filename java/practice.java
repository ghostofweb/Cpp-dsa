import java.util.Scanner;

public class practice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter your two numbers:");
        int x = sc.nextInt();
        int y = sc.nextInt();
        
        System.out.println("1. Add\n2. Subtract\n3. Multiply\n4. Division");
        
        boolean continueCalculation = true;
        do {
            System.out.println("Enter your case (or enter 0 to exit):");
            int n = sc.nextInt();
            
            switch (n) {
                case 1:
                    System.out.println("Result: " + (x + y));
                    break;
                case 2:
                    System.out.println("Result: " + (x - y));
                    break;
                case 3:
                    System.out.println("Result: " + (x * y));
                    break;
                case 4:
                    if (y != 0) {
                        System.out.println("Result: " + ((double)x / y));
                    } else {
                        System.out.println("Error: Division by zero");
                    }
                    break;
                case 0:
                    continueCalculation = false;
                    break;
                default:
                    System.out.println("Invalid input, please enter a number between 0 and 4.");
            }
        } while (continueCalculation);
        
        sc.close();
    }
}
