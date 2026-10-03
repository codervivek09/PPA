import java.util.Scanner;

class Demo 
{
    public static int division(int no1, int no2)
    {
        return no1/no2;
    }

}

class ExceptionDemo3 {
    public static void main(String A[]) {
        
        Scanner Sobj = new Scanner(System.in);

        int No1 = 0, No2 = 0, Ans = 0;

        System.out.println("Enter First Number");
        No1 = Sobj.nextInt();

        System.out.println("Enter Second Number");
        No2 = Sobj.nextInt();

        Ans = Demo.division(No1, No2);                // Exception Prone Code -> N/0

        System.out.println("Division is : " + Ans);
    }
}