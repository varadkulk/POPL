import java.io.*;
import java.util.Scanner;
import static java.lang.System.*;

class operateString {
	static Scanner sc = new Scanner(System.in);

	void compare(String s) {
		s = s.trim();
		out.print("Enter String to compare: ");
		String s2 = sc.nextLine();
		s2 = s2.trim();
		if (s.equals(s2))
			out.println("String s1 and s2 are equal");
		else
			out.println("String s1 and s2 are not equal");
	}

	void subString(String s) {
		s = s.trim();
		out.print("Enter Sub string: ");
		String s2 = sc.nextLine();
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

	void concat(String s) {
		out.print("Enter string to concat: ");
		String s2 = sc.nextLine();
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
				os.compare(s);
				break;
			case 3:
				os.subString(s);
				break;
			case 4:
				os.concat(s);
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
}