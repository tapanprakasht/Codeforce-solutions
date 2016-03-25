import java.util.*;

public class Word
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int upper=0,lower=0,i;
		String str = sc.nextLine();
		for(i=0;i<str.length();i++)
		{

			if(Character.isUpperCase(str.charAt(i)))
				upper++;
			else 
				lower++;
		}
		if(lower>=upper)
			System.out.println(str.toLowerCase());
		else 
			System.out.println(str.toUpperCase());
	}
}