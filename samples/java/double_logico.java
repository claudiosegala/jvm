/*
 * Compile assim: javac long_logico.java -target 1.2 -source 1.2
 * Saida Esperada:
* 2.000000
* 1.000000
* 0
*/
public class double_logico{
	public static void main(String args[]){
		double a= 1.0;
		double b=2.0;
	
		/*dcmp*/

		if (b>a)  System.out.println(b);
		if (a<b)  System.out.println(a);
		if (a!=b) System.out.println(0);
		
		
	}
}