public class ThreadPriorityDemo {
    public static void main(String[] args) {
        // Create three threads with different priorities
        Thread highPriorityThread = new Thread(new Task(), "High Priority Thread");
        Thread mediumPriorityThread = new Thread(new Task(), "Medium Priority Thread");
        Thread lowPriorityThread = new Thread(new Task(), "Low Priority Thread");

        // Set thread priorities
        highPriorityThread.setPriority(10); // 10
        mediumPriorityThread.setPriority(5); // 5
        lowPriorityThread.setPriority(1); // 1

        // Start the threads
        highPriorityThread.start();
        lowPriorityThread.start();
        mediumPriorityThread.start();
       
    }

    static class Task implements Runnable {
        @Override
        public void run() {
            for (int i = 0; i < 5; i++) {
                System.out.println(Thread.currentThread().getName() + " is running");
            }
        }
    }
}
