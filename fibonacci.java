import java.util.Scanner;
class palindrome
{
	public static void main(String args[])	
	{
	System.out.println("Enter the limit : \n");
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	System.out.print("First " + n + " terms: ");
        for (int i = 1; i <= n; ++i)
        {
            System.out.print(t1 + " + ");
            int sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
    }
}

	
