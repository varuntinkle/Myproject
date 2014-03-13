import java.io.*;

public class untitled
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader instream = new FileReader("in.txt");
		BufferedReader in = new BufferedReader(instream);
		int a,b;
		a=Integer.parseInt(in.readLine());
		b=Integer.parseInt(in.readLine());
		System.out.println(a + b);
	

	}

}