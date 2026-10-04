class Base 
{
    public int i;
    public int j;

    public void Base()
        {
            System.out.println("Inside Base Constructor");
        }

    public void fun()
        {
            System.out.println("Inside Base Fun");
        }

    public void gun()
        {
            System.out.println("Inside Base Gun");
        }
}

class Derived extends Base 
{
    public int x;
    public int y;

    public void Derived()
    {
        System.out.println("Inside Derived Constructor");
    }
    public void sun()
    {
        System.out.println("Inside Derived Sun");
    }
}

class DerivedX extends Derived
{
    public int a;

    public void DerivedX()
    {
        System.out.println("Inside Derived Constructor");
    }
    public void run()
    {
        System.out.println("Inside Derived Run");
    }
}

class MultiLevel
{
    public static void main(String[] args) {
        
        DerivedX Dobj = new DerivedX();

        Dobj.fun();
        Dobj.gun();
        Dobj.sun();
        Dobj.run();
    }
}