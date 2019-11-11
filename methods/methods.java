import java.io.*;
import java.util.Scanner;
import static java.lang.System.*;

class methods {
	static int square(int x) {
		return x * x;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		out.print("Enter the number: ");
		int x = Integer.parseInt(sc.nextLine());
		out.println("Square of " + (x) + " is " + square(x));
	}

}/*
Output:
Enter the number: 25
Square of 25 is 625*/