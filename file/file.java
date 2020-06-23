import java.io.*;
import java.util.Scanner;
import java.io.FileWriter;
import java.io.IOException;
import java.io.FileReader;
import static java.lang.System.*;

class file {
	public static void main(String[] args)throws IOException {
		Scanner sc = new Scanner(System.in);
		out.println("Enter data:");
		String data = sc.nextLine();
		FileWriter fw = new FileWriter("output.txt");
		for (int i = 0; i < data.length(); i++)
			fw.write(data.charAt(i));
		out.println("\nThe data was successfully written to \"output.txt\"");
		fw.close();
		FileReader fr = new FileReader("output.txt");
		out.println("\nThe data in \"output.txt\" is:");
		int i;
		while ((i = fr.read()) != -1)
			System.out.print((char) i);
		fr.close();
	}
}
/*
Output:
Enter data:
Varad

The data was successfully written to "output.txt"

The data in "output.txt" is:
Varad
*/
