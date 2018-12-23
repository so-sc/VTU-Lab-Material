import java.io.*;
import java.net.*;

/**
 * TCPClient
 */
public class TCPClient {

	public static void main(String[] args) throws IOException {
		Socket sock = new Socket("127.0.0.1", 4000);
		System.out.print("Enter the file name: ");
		BufferedReader keyRead = new BufferedReader(new InputStreamReader(System.in));
		String fName = keyRead.readLine();

		OutputStream oStream = sock.getOutputStream();
		PrintWriter pWrite = new PrintWriter(oStream, true);
		pWrite.println(fName);

		InputStream iStream = sock.getInputStream();
		BufferedReader socketRead = new BufferedReader(new InputStreamReader(iStream));

		String str;
		while ((str = socketRead.readLine()) != null) {
			System.out.println(str);
		}
		pWrite.close();
		socketRead.close();
		keyRead.close();
		sock.close();
		iStream.close();
	}
}