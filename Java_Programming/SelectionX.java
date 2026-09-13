import java.util.Scanner;

class SelectionX 
{
    public static void main(String[] args) 
    {
        Scanner Sobj = new Scanner(System.in);
        
        int std = 0;
        System.out.println("Enter Your Standard");
        std = Sobj.nextInt();

        if(std==1)
        {
            System.out.println("Exam time is 9:30 AM");
        }
        else if(std==2)
        {
            System.out.println("Exam time is 10:30 AM");
        }
        else if(std==3)
        {
            System.out.println("Exam time is 11:30 AM");
        }
        else 
        {
            System.out.println("Invalid Input");
        }
    }
}
