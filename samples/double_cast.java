/*
 * Compile assim: javac double_cast.java -target 1.2 -source 1.2
 */
public class double_cast{
	public static void main(String args[]){
		double a=100.6;
		
		/*d2f*/
		System.out.println((float)a);
		/*d2i*/
		System.out.println((int)a);
		/*d2l*/
		System.out.println((long)a);

	}	
}