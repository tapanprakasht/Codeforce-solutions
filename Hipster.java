import java.util.*;

public class Hipster
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int a,b,min,max;
		a = sc.nextInt();
		b = sc.nextInt();
		min = (a<b)?a:b;
		a = a-min;
		b = b-min;
		max = (a/2)+(b/2);
		System.out.println(min+" "+ max);
	}
}