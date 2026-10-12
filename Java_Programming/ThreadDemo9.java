class Demo extends Thread 
{
    public void run() 
    {
        try {
        
            int i = 0;

            for(i=1; i<=10; i++)
            {
                System.out.println("Thread : " + Thread.currentThread().getName() + " " + i);
                Thread.sleep(3000);
            }
            
        } 
        catch (Exception eobj) 
        {
        }
    }
}

class ThreadDemo9 {
    public static void main(String A[]) throws Exception
    {
        System.out.println("Inside Main Thread");

        Demo Dobj1 = new Demo();
        Demo Dobj2 = new Demo();

        Dobj1.setName("First_Thread");
        Dobj1.setName("Second_Thread");
        Dobj1.start();
        Dobj2.start();

        Dobj1.join();
        Dobj2.join();

        System.out.println("End of main thread");               

    }
}
