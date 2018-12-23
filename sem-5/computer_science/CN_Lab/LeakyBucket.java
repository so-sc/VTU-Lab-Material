import java.util.Scanner;

/**
 * LeakyBucket
 */
public class LeakyBucket {

	public static int min(int x, int y) {
		if (x < y) {
			return x;
		} else {
			return y;
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int drop = 0, mini, n, cap, count = 0;
		int inp[] = new int[25];
		int process;
		System.out.print("Enter the bucket size:");
		cap = sc.nextInt();
		System.out.print("Enter the output rate:");
		process = sc.nextInt();
		System.out.print("Enter the number of packets:");
		n = sc.nextInt();
		System.out.println("Enter the size of the objects to be sent:");
		int i;
		for (i = 0; i < n; i++) {
			inp[i] = sc.nextInt();
		}
		System.out.println("\nSecond | Packet Received | Packet Sent | Packets Left | Packets Dropped | \n");
		System.out.println("==========================================================================");
		for (i = 0; i < n; i++) {
			count += inp[i];
			if (count > cap) {
				drop = count - cap;
				count = cap;
			}
			System.out.print(i + 1);
			System.out.print("\t\t" + inp[i]);
			mini = min(count, process);
			System.out.print("\t\t" + mini);
			count -= mini;
			System.out.print("\t\t" + count);
			System.out.println("\t\t" + drop);
			drop = 0;
		}
		for (; count != 0; i++) {
			if (count > cap) {
				drop = count - cap;
				count = cap;
			}
			System.out.print(i + 1);
			System.out.print("\t\t0");
			mini = min(count, process);
			System.out.print("\t\t" + mini);
			count -= mini;
			System.out.print("\t\t" + count);
			System.out.println("\t\t" + drop);
		}
		sc.close();
	}
}