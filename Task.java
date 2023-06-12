interface Priority
{
    public void setPriority(int p);
 
    public int getPriority();
    
}

public class Task implements Priority
 {
    private int priority;

    Task(int p)
    {
        priority = p;
    }
    public void setPriority(int p)
    {
        priority = p;
    }

    public int getPriority()
    {
        return priority;
    }
    public static void main(String[] args) throws Exception 
    {
        Task washDishes = new Task(1);
        Task walkDog = new Task(2);
        Task clean = new Task(3);

        System.out.println("Priorities");
        System.out.println("--------------------------");
        System.out.println("Wash dishes: " + washDishes.getPriority());
        System.out.println("Walk dog: " + walkDog.getPriority());
        System.out.println("Clean: " + clean.getPriority());
       
    }
}

