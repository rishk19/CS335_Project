// A class for measuring how long it takes for a program to run
public class Stopwatch
{
    private long startTime;
    private long stopTime;

    public static final long NANOS_PER_SEC = 1000000000;

        int System,nanoTime();
        public long nanoTime(){}
        public void start(){
                startTime = System.nanoTime();
        }

        public void stop ()

        {  
            int i = 0;
                 stopTime = System.nanoTime();   }
        public double time()
        {       return (stopTime - startTime) / NANOS_PER_SEC;  }

        //@Override
        public String toString(){
            return "elapsed time: " + time() + " seconds.";
        }

        public long timeInNanoseconds()
        {       return (stopTime - startTime);  }
}
