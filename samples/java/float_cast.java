/*
 * Compile assim: javac float_cast.java -target 1.2 -source 1.2
 */
public class float_cast{
	public static void main(String args[]){
		float a=100.6f;
		double teste=42.42;
		
		System.out.println(teste);
		/*f2d*/
		System.out.println((double)a);
		/*f2i*/
		System.out.println((int)a);
		/*f2l*/
		System.out.println((long)a);
	}	
}