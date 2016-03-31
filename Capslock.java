import java.util.*;
public class Capslock
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int i,count = 0;
		String str = sc.nextLine();
		for(i=0;i<str.length();i++)
		{
			if(Character.isUpperCase(str.charAt(i)))
			{
				count++;
			}
		}

		if(count == str.length())
		{
			System.out.println(str.toLowerCase());
		}
		else if (Character.isLowerCase(str.charAt(0)) && count == str.length()-1)
		{
			System.out.println(str.substring(0,1).toUpperCase()+ str.substring(1).toLowerCase());
		}
		else
		{
			System.out.println(str);
		}
	}
}