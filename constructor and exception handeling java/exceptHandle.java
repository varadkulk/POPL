
class exceptHandle {
	public static void main(String[] args) {
		int i = 10, j = 0, k;
		try {
			k = i / j;
			System.out.println(k);
		} catch (Exception e) {
			System.out.println("Divide by 0 error");
		}
	}
}
/*
Output:
Divide by 0 error
*/