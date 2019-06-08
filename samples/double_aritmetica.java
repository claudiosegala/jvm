/*
 * Compile assim: javac double_aritmetica.java -target 1.2 -source 1.2
 */

/*Testar os valores extremos*/
public class double_aritmetica{
	public static void main(String args[]){
		double a=98.24;
		double b=134.87;
		System.out.println(a+b);
		System.out.println(a-b);
		System.out.println(a*b);
		System.out.println(a/b);
		System.out.println(-a);
		System.out.println(b%a);
	}
}
