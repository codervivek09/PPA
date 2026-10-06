import java.util.Scanner;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}
class ExceptionDemo4 {
    public static void main(String A[]) {
        int Age = 0;
        
        Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter Your Age: ");
        Age = Sobj.nextInt();

        try
        {
            if(Age < 18) 
            {
                throw new AgeInvalid("Your are Under Age");
            }
            else 
            {
                System.out.println("Welcome to ......");
            }
        }
        catch(AgeInvalid aobj)
        {
            System.out.println("Exception Occured Due to Age");
        }

    }
}

// super means Accessing Data from Parent class
// 