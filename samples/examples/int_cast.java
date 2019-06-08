/*
 * Compile assim: javac int_cast.java -target 1.2 -source 1.2
 */
public class int_cast{
	public static void main(String args[]){
		int a=254;
		/*i2d*/
		System.out.println((double)a);
		/*i2f*/
		System.out.println((float)a);
		/*i2l*/
		System.out.println((long)a);
		/*i2c*/
		System.out.println((char)a);
		/*i2b*/
		System.out.println((byte)a);
		/*i2s*/
		System.out.println((short)a);
		
		a = -a;
		/*i2d*/
		System.out.println((double)a);
		/*i2f*/
		System.out.println((float)a);
		/*i2l*/
		System.out.println((long)a);
		/*i2c*/
		System.out.println((char)a);
		/*i2b*/
		System.out.println((byte)a);
		/*i2s*/
		System.out.println((short)a);
	}	
}