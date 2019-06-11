/*
 * Compile assim: javac long_aritmetica.java -target 1.2 -source 1.2
Saida esperada:
 120
 80
 2000
 5
 -100
 0
 4
 400
 25
 1073741823
 */

/*Testar os valores extremos*/
public class long_aritmetica{
	public static void main(String args[]){
		long a=100;
		long b=20;
		System.out.println(a+b);
		System.out.println(a-b);
		System.out.println(a*b);
		System.out.println(a/b);
		System.out.println(-a);
		System.out.println(a%b);
		System.out.println(a&b);
		System.out.println(a<<2);
		System.out.println(a>>2);
		a=-1>>>2;
		System.out.println(a);
	}
}