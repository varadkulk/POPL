import java.io.*;
import java.util.Scanner;
import static java.lang.System.*;

class operateString {
	static Scanner sc = new Scanner(System.in);

	void compare(String s, String s2) {
		s = s.trim();
		s2 = s2.trim();
		if (s.equals(s2))
			out.println("String s1 and s2 are equal");
		else
			out.println("String s1 and s2 are not equal");
	}

	void subString(String s, String s2) {
		s = s.trim();
		s2 = s2.trim();
		int x = 0;
		for (int i = 0; i < (s.length() - s2.length()); i++) {
			if ((s2.equals(s.substring(i, i + (s2.length()))))) {
				out.println("\"" + s2 + "\" is present in \"" + s + "\"");
				i = s.length() + 1;
				x = i;
			}
		}
		if (x != s.length() + 1)
			out.println("\"" + s2 + "\" is not present in \"" + s + "\"");
	}

	void concat(String s, String s2) {
		StringBuilder sb = new StringBuilder();
		sb.append(s);
		sb.append(s2);
		out.println("The concatination of \"" + s + "\" and \"" + s2 + "\" is \"" + sb.toString() + "\"");
	}

	void palindrome(String s) {
		int i = 0, j = s.length() - 1;
		while (i < j) {
			if (s.charAt(i) != s.charAt(j)) {
				out.println(s + " is not a palindrome String");
				break;
			}
			i++;
			j--;
			if (i >= j)
				out.println(s + " is a palindrome String");

		}
	}

	public static void main(String[] args) {
		operateString os = new operateString();
		out.print("Enter String: ");
		String s = sc.nextLine();
		int c = -1;
		while (c != 0) {
			out.print(
					"Enter:\n1. for length of string\n2. for comparision\n3. for sub String\n4. for concat\n5. for palindrome\n0. Exit\nChoice: ");
			c = sc.nextInt();
			switch (c) {
			case 0:
				out.println("Thank You!!");
				break;
			case 1:
				out.println("Length of the string is: " + s.length());
				break;
			case 2:
				out.print("Enter String: ");
				String cmp = sc.nextLine();
				os.compare(s,cmp);
				break;
			case 3:
				out.print("Enter String: ");
				String sub = sc.nextLine();
				os.subString(s,sub);
				break;
			case 4:
				out.print("Enter String: ");
				String con = sc.nextLine();
				os.concat(s,con);
				break;
			case 5:
				os.palindrome(s);
				break;
			default:
				out.println("Wrong Input");
				break;
			}
		}
	}
}/*
Output:
Enter String: varav
Enter:
1. for length of string
2. for comparision
3. for sub String
4. for concat
5. for palindrome
0. Exit
Choice: 1
Length of the string is: 5
Enter:
1. for length of string
2. for comparision
3. for sub String
4. for concat
5. for palindrome
0. Exit
Choice: 2
Enter String: abc
String s1 and s2 are not equal
Enter:
1. for length of string
2. for comparision
3. for sub String
4. for concat
5. for palindrome
0. Exit
Choice: 3
Enter String: va
"va" is present in "varav"
Enter:
1. for length of string
2. for comparision
3. for sub String
4. for concat
5. for palindrome
0. Exit
Choice: 4
Enter String: 
The concatination of "varav" and " is really varad" is "varav is really varad"
Enter:
1. for length of string
2. for comparision
3. for sub String
4. for concat
5. for palindrome
0. Exit
Choice: 5
varav is a palindrome String
Enter:
1. for length of string
2. for comparision
3. for sub String
4. for concat
5. for palindrome
0. Exit
Choice: 0
Thank You!! */