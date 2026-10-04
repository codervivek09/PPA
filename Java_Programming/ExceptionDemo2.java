import java.util.Scanner;

class ExceptionDemo2X {
    public static void main(String A[]) {
        
        Scanner Sobj = new Scanner(System.in);

        int Arr[] = {11,21,51,101,111};

        int index = 0;

        try
        {
            System.out.println("Enter The Index");
            index = Sobj.nextInt();

            System.out.println("Element is : " + Arr[index]);
        } 
        catch(ArrayIndexOutOfBoundsException Aobj)
        {
            System.out.println("Insid Catch : " + Aobj);
        }

        System.out.println("End of Main");
    }
}