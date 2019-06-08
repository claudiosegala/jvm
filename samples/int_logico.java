/*
 * Compile assim: javac int_logico.java -target 1.2 -source 1.2
 */
public class int_logico{
	public static void main(String args[]){
		int a=10; /*1010*/
		int b=9;  /*1001*/
		int array[] = {5,5,6};
		int c = 0;
		int d = -1;
		
		System.out.println(a&b); /*Tem que dar 8*/
		System.out.println(a|b); /*Tem que dar 11*/
		System.out.println(a^b); /*Tem que dar 3*/
		
		/*icmp*/
		if(a>b) System.out.println(a);//nao processou essa linha
		if(b<a) System.out.println(b);
		if(b!=a) System.out.println("a diferente de b");	
		
		if(a>= 10) System.out.println("a maior igual a 10");
		if(a<=10) System.out.println("a menor igual a 10");
		if(a<11) System.out.println("a menor que 11");
		if(a==10) System.out.println("a igual a 10");	
		
		if(c == 0) System.out.println("c igual a 0");
		if(a != 0) System.out.println("a diferente de 0");
		if(d < 0) System.out.println("d menor que 0");
		if(d <=0) System.out.println("d menor ou igual a 0");
		if(a > 0) System.out.println("a maior que 0");	
		if(a >= 0) System.out.println("a maior ou igual a 0");	
		

		
		if(array[0]==array[1]) System.out.println("indice 0 igual a indice 1");	
		if(array[0]!=array[2]) System.out.println("indice 0 diferente de indice 2");	

	}
}