<<<<<<< HEAD
import java.net.*;
import java.io.*;

/**
 * TCPServer
 */
public class TCPServer {
	public static void main(String[] args) throws IOException {
		ServerSocket sersock = new ServerSocket(4000);
		System.out.println("Server ready for connection.");
		Socket sock = sersock.accept();
		System.out.println("Connection is succesful and ready for chatting.");
		InputStream iStream = sock.getInputStream();
		BufferedReader fileRead = new BufferedReader(new InputStreamReader(iStream));
		String fName = fileRead.readLine();
		BufferedReader contentRead = new BufferedReader(new FileReader(fName));

		OutputStream oStream = sock.getOutputStream();
		PrintWriter pWrite = new PrintWriter(oStream, true);

		String str;
		while ((str = contentRead.readLine()) != null) {
			pWrite.println(str);
		}
		sock.close();
		sersock.close();
		pWrite.close();
		fileRead.close();
		contentRead.close();
	}
=======
import java.net.*;
import java.io.*;

/**
 * TCPServer
 */
public class TCPServer {
	public static void main(String[] args) throws IOException {
		ServerSocket sersock = new ServerSocket(4000);
		System.out.println("Server ready for connection.");
		Socket sock = sersock.accept();
		System.out.println("Connection is succesful and ready for chatting.");
		InputStream iStream = sock.getInputStream();
		BufferedReader fileRead = new BufferedReader(new InputStreamReader(iStream));
		String fName = fileRead.readLine();
		BufferedReader contentRead = new BufferedReader(new FileReader(fName));

		OutputStream oStream = sock.getOutputStream();
		PrintWriter pWrite = new PrintWriter(oStream, true);

		String str;
		while ((str = contentRead.readLine()) != null) {
			pWrite.println(str);
		}
		sock.close();
		sersock.close();
		pWrite.close();
		fileRead.close();
		contentRead.close();
	}
>>>>>>> 8c6ec7dee2e69b01976459206eb713b748e23f9b
}