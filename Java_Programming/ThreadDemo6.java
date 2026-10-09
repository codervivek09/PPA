class Demo extends Thread 
{
    public void run() 
    {
        System.out.println("Thread is Running........");
    }
}

class ThreadDemo6 {
    public static void main(String A[]) throws Exception
    {
        System.out.println("Inside Main Thread");

        Demo Dobj1 = new Demo();
        Demo Dobj2 = new Demo();

        Dobj1.start();
        Dobj2.start();

        Dobj1.join();
        Dobj2.join();

        System.out.println("End of main thread");               //Issue

    }
}