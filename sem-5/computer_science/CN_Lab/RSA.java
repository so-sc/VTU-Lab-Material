import java.util.*;
import java.io.*;

/**
 * RSA
 */
public class RSA {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		InputStreamReader r = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(r);
		String message1;
		int[] plainText = new int[100];
		int[] cipherText = new int[100];
		int n, d, e, z, p, q;
		System.out.println("Enter the values of p and q:");
		p = sc.nextInt();
		q = sc.nextInt();
		n = p * q;
		z = (p - 1) * (q - 1);
		System.out.println("Select a value for e:");
		e = sc.nextInt();
		System.out.println("Error message:");
		message1 = br.readLine();
		char[] msg = message1.toCharArray();
		for (int i = 0; i < msg.length; i++) {
			plainText[i] = msg[i];
		}
		for (d = 0; d < z; d++) {
			if ((e * d) % z == 1) {
				break;
			}
		}
		System.out.println("p = " + p + "\tq = " + q + "\tn = " + n + "\tz = " + z + "\te = " + e + "\td = " + d);
		System.out.println("Cipher Text = ");
		for (int i = 0; i < msg.length; i++) {
			cipherText[i] = mult(plainText[i], e, n);
		}
		for (int i = 0; i < msg.length; i++) {
			System.out.print(cipherText[i] + "\t");
		}
		System.out.println();
		System.out.println("Plain Text = ");
		for (int i = 0; i < msg.length; i++) {
			plainText[i] = mult(cipherText[i], d, n);
		}
		for (int i = 0; i < msg.length; i++) {
			System.out.print((char) plainText[i]);
		}
		System.out.println();
		sc.close();
	}

	static int mult(int x, int y, int n) {
		int k = 1;
		for (int i = 0; i < y; i++) {
			k = (k * x) % n;
		}
		return k;
	}
}