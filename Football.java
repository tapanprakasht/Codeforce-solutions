import java.lang.*;
import java.util.*;
public class Football
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String str = 	sc.nextLine();
		CharSequence seq1 = "0000000";
		CharSequence seq2 = "1111111";
		if(str.contains(seq1) || str.contains(seq2))
			System.out.println("YES");
		else 
			System.out.println("NO");
	}
}
