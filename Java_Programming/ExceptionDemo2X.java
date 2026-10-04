import java.util.Scanner;

class ExceptionDemo2 {
    public static void main(String A[]) {
        
        Scanner Sobj = new Scanner(System.in);

        int Arr[] = {11,21,51,101,111};

        int index = 0;

        System.out.println("Enter The Index");
        index = Sobj.nextInt();

        System.out.println("Element is : " + Arr[index]);
    
        System.out.println("End of Main");
    }
}