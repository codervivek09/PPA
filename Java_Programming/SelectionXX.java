import java.util.Scanner;

class SelectionX 
{
    public static void main(String[] args) 
    {
        Scanner Sobj = new Scanner(System.in);
        
        int std = 0;
        System.out.println("Enter Your Standard");
        std = Sobj.nextInt();

        switch(std)
        {
            case 1 :
                System.out.println("Exam time is 9:30 AM");
                break;
            case 2 : 
                System.out.println("Exam time is 10:30 AM");
                break;
            case 3 :
                System.out.println("Exam time is 11:30 AM");
                break;
            default:
                System.out.println("Invalid");
        }
    }
}
