/*
 * Compile assim: javac long_logico.java -target 1.2 -source 1.2
 * Saida Esperada:
* 0
* 1
* 1
* 0
* 1
* 0
* 0
 */
public class long_logico{
	public static void main(String args[]){
		long a=0;
		long b=1;
		/*land*/
		long c = a&b; 
		System.out.println(c);
		
		/*lor*/
		c=a|b;
		System.out.println(c);
		/*lxor*/
		c=a^b;
		System.out.println(c);
		
		c= a<<2;
		c= a>>2;
		System.out.println(c);
		
		/*lcmp*/
		if (b>a)  System.out.println(b);
		if (a<b)  System.out.println(a);
		if (a!=b) System.out.println(0);
	}
}