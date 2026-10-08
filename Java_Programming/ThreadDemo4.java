class Demo implements Runnable 
{
    public void run() 
    {
        System.out.println("Thread is Running........");
    }
}

class ThreadDemo4 {
    public static void main(String A[]) {

        System.out.println("Inside Main Thread");

        Thread Dobj1 = new Thread(new Demo());
        Thread Dobj2 = new Thread(new Demo());

        Dobj1.start();                      
        Dobj2.start();                      

    }
}