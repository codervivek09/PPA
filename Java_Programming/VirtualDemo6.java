class Base 
{   
        int i, j;
        void fun()                                              // 1000
        {    System.out.println("Base Fun\n"); }
        void gun()                                              // 2000
        {    System.out.println("Base Gun\n"); }
        void sun()                                              // 3000
        {    System.out.println("Base Sun\n"); }
        void run()                                              // 4000
        {    System.out.println("Base Run\n"); }
}

class Derived extends Base 
{
        int x;
        void fun()                                               // 5000
        {    System.out.println("Derived Fun\n");  }
        void sun()                                               // 6000
        {    System.out.println("Derived Sun\n"); }
        void mun()                                               // 7000     
        {    System.out.println("Derived Mun\n"); }
        void bun()                                               // 8000
        {    System.out.println("Derived Bun\n");  }
}  

class VirtualDemo6 {
    public static void main (String A[])
    {
        Base BP = new Derived();

        BP.fun();
        BP.gun();
        BP.sun();
        BP.run();
        // BP.mun();           // Error
        // BP.bun();           // Error
    }
}