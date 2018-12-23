import java.io.*;

/**
 * CRC
 */
public class CRC {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int[] data;
		int[] div;
		int[] divisor;
		int[] rem;
		int[] crc;
		int dataBits, divisorBits, totalLength;
		System.out.print("Enter the number of data bits:");
		dataBits = Integer.parseInt(br.readLine());
		data = new int[dataBits];

		System.out.println("Enter the data bits:");
		for (int i = 0; i < dataBits; i++) {
			data[i] = Integer.parseInt(br.readLine());
		}
		divisorBits = 17;
		divisor = new int[] { 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

		totalLength = dataBits + divisorBits - 1;

		div = new int[totalLength];
		rem = new int[totalLength];
		crc = new int[totalLength];

		for (int i = 0; i < data.length; i++) {
			div[i] = data[i];
		}
		System.out.println("Dividend after appending zeros:");
		for (int i = 0; i < div.length; i++) {
			System.out.print(div[i]);
		}
		System.out.println();

		for (int i = 0; i < div.length; i++) {
			rem[i] = div[i];
		}
		rem = divide(divisor, rem);
		for (int i = 0; i < div.length; i++) {
			crc[i] = div[i] ^ rem[i];
		}
		System.out.println();
		System.out.println("The CRC code is:");
		for (int i = 0; i < crc.length; i++) {
			System.out.print(crc[i]);
		}
		System.out.println();
		System.out.println("Enter CRC code of " + totalLength + " bits:");
		for (int i = 0; i < crc.length; i++) {
			crc[i] = Integer.parseInt(br.readLine());
		}
		for (int i = 0; i < crc.length; i++) {
			rem[i] = crc[i];
		}
		rem = divide(divisor, rem);
		for (int i = 0; i < rem.length; i++) {
			if (rem[i] != 0) {
				System.out.println("Error.");
				break;
			}
			if (i == rem.length - 1) {
				System.out.println("No error.");
			}
		}
	}

	public static int[] divide(int[] divisor, int[] rem) {
		int cur = 0;
		while (true) {
			for (int i = 0; i < divisor.length; i++) {
				rem[cur + i] = (rem[cur + i] ^ divisor[i]);
			}
			while (rem[cur] == 0 && cur != rem.length - 1) {
				cur++;
			}
			if ((rem.length - cur) < divisor.length) {
				break;
			}
		}
		return rem;
	}
}