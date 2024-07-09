import java.util.*;

class practice{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.err.println("number of voltage used");
        int a = sc.nextInt();
        a -= 100;
        if (a < 100) {
            System.out.println("total bill : " + 0);
        } else if (a > 100 && a < 200){
            System.out.println("total bill : " + a*5 );
        }
        else if(a > 200 && a < 400){
            System.out.println("total bill : " + a*8);
        }
        else{
            System.out.println("total bill : " + 2000);
        }
    }
}