import java.util.*;
public class Dupstep
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		System.out.println(str.replaceAll("WUB"," ").replaceAll("\\s+"," ").trim());

	}
}
