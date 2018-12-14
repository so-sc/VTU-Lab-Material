import java.io.*;
import java.net.*;

/**
 * UDPServer
 */
public class UDPServer {
	public static void main(String[] args) throws IOException {
		DatagramSocket serverSocket = new DatagramSocket(9876);
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		byte[] receiveData = new byte[1024];
		byte[] sendData = new byte[1024];
		DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);
		serverSocket.receive(receivePacket);
		String sentence = new String(receivePacket.getData());
		System.out.println("RECEIVED: " + sentence);
		InetAddress IPAddress = receivePacket.getAddress();
		int port = receivePacket.getPort();
		System.out.println("Enter the message:");
		String data = br.readLine();
		sendData = data.getBytes();
		DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length, IPAddress, port);
		serverSocket.send(sendPacket);
		serverSocket.close();

	}
}