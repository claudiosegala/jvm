/*
 * Compile assim: javac long_aritmetica.java -target 1.2 -source 1.2
 */

/*Testar os valores extremos*/
public class short_aritmetica{
	public static void main(String args[]){
		short a=100;
		short b=20;
		System.out.println(a+b);
		System.out.println(a-b);
		System.out.println(a*b);
		System.out.println(a/b);
		System.out.println(-a);
		System.out.println(a%b);
		System.out.println(a&b);
		System.out.println(a<<2);
		System.out.println(a>>2);
	}
}