/*
 * Compile assim: javac float_aritmetica.java -target 1.2 -source 1.2
 */

/*Testar os valores extremos*/
public class float_aritmetica{
	public static void main(String args[]){
		float a=100.4f;
		float b=20.3f;
		System.out.println(a+b);
		System.out.println(a-b);
		System.out.println(a*b);
		System.out.println(a/b);
		System.out.println(-a);
		System.out.println(a%b);
	}
}