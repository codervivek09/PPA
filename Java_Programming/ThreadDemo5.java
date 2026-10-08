class Demo extends Thread 
{
    public void run() 
    {
        System.out.println("Thread is Running........");
    }
}

class ThreadDemo5 {
    public static void main(String A[]) {

        System.out.println("Inside Main Thread");

        Demo Dobj1 = new Demo();
        Demo Dobj2 = new Demo();

        Dobj1.start();
        Dobj2.start();

        System.out.println("End of main thread");               //Issue

    }
}