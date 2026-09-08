class Demo 
{
    public Demo() {
        System.out.println("Inside Default Constructor");
    }

    public Demo(int i, int j) 
    {
        System.out.println("Inside Parameterised Constructor");
    }
}


class Constructors_Demo 
{
    public static void main(String A[]) {
        Demo Dobj1 = new Demo();
        Demo Dobj2 = new Demo(11, 21);
    }
}