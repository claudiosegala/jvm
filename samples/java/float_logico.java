/*
 * Compile assim: javac float_logico.java -target 1.2 -source 1.2
 * Saida Esperada:
 * 1342512.124
 * 0.0
 * 0.0
 * -1.000000
 * -1.000000
 *diferente
 */
class float_logico{
	public static void main(String args[]){
		float a=-1.0f;
		float b=0.0f;
		float teste=1342512.124f;
		System.out.println(teste);
		
		/*fcmp*/

		if (b>a)  System.out.println(b);
		if (b>=a)  System.out.println(b);
		if (a<=b)  System.out.println(a);
		if (a<b)  System.out.println(a);
		if (a!=b) System.out.println("diferente");
		if (a==b) System.out.println("igual");
	}
}