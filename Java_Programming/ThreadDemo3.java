class Demo implements Runnable 
{
    public void run() 
    {
        System.out.println("Thread is Running........");
    }
}

class ThreadDemo3 {
    public static void main(String A[]) {

        System.out.println("Inside Main Thread");

        Demo Dobj1 = new Demo();
        Demo Dobj2 = new Demo();

        Dobj1.start();                      // Error
        Dobj2.start();                      // Error

    }
}