/*
 * Compile assim: javac int_aritmetica.java -target 1.2 -source 1.2
 */

/*Testar os valores extremos*/
public class int_aritmetica{
	public static void main(String args[]){
		int a=100;
		int b=30;
		System.out.println(a+b);
		System.out.println(a-b);
		System.out.println(a*b);
		System.out.println(a/b);
		System.out.println(-a);
		System.out.println(a%b);
		System.out.println(a&b);
		System.out.println(a<<2);
		System.out.println(a>>2);
		a=-100;
		System.out.println(a>>2);//-25, erro na ishr
		a=-1>>>2;//zero right shift
		System.out.println(a);
		
		
		/*-1=0xFFFF FFFF*/
		/*0011 1111*/
		/*3FFF FFFF*/
	}
}