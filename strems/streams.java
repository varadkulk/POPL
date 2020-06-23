import java.util.*;
import static java.lang.System.*;

class streams {
	public static void main(String[] args) {
		List<String> s = Arrays.asList("", "abc", "baca", "arew");
		int e = 0, l = 0, a = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s.get(i).length() == 0)
				e++;
			else {
				if (s.get(i).length() > 3)
					l++;
				else if (s.get(i).charAt(0) == 'a')
					a++;
			}
		}
		out.println("Count:\nEmpty: " + e + "\nlength>3: " + l + "\nstarts with 'a': " + a);
	}
}
/*
Output: 
Count:
Empty: 1
length>3: 2
starts with 'a': 1
*/