class Demo extends Thread 
{
    public void run() 
    {
       int i = 0;
        for(i=1; i<=10; i++){
            System.out.println("Thread : " + Thread.currentThread().getName() + " " + i);
        }
    }
}

class ThreadDemo8 {
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


// Output will change everytime according to JVM Scheduling Algorithm
// We cant predict flow -> 
// We cant predict order ->

// Inside Main Thread
// Thread : Second_Thread 1
// Thread : Second_Thread 2
// Thread : Second_Thread 3
// Thread : Second_Thread 4
// Thread : Second_Thread 5
// Thread : Second_Thread 6
// Thread : Second_Thread 7
// Thread : Second_Thread 8
// Thread : Second_Thread 9
// Thread : Thread-1 1
// Thread : Thread-1 2
// Thread : Thread-1 3
// Thread : Thread-1 4
// Thread : Thread-1 5
// Thread : Thread-1 6
// Thread : Thread-1 7
// Thread : Second_Thread 10
// Thread : Thread-1 8
// Thread : Thread-1 9
// Thread : Thread-1 10
// End of main thread


// Inside Main Thread
// Thread : Thread-1 1
// Thread : Thread-1 2
// Thread : Thread-1 3
// Thread : Thread-1 4
// Thread : Thread-1 5
// Thread : Thread-1 6
// Thread : Thread-1 7
// Thread : Second_Thread 1
// Thread : Second_Thread 2
// Thread : Thread-1 8
// Thread : Second_Thread 3
// Thread : Second_Thread 4
// Thread : Thread-1 9
// Thread : Second_Thread 5
// Thread : Thread-1 10
// Thread : Second_Thread 6
// Thread : Second_Thread 7
// Thread : Second_Thread 8
// Thread : Second_Thread 9
// Thread : Second_Thread 10
// End of main thread

