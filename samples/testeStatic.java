class testeStatic{
	private static int number = 22;
	private static String nome = "Teste";
	private static double td = 3.68;
	private static long tl = 3;
       private static float tf = 5.8F;

	private static float funfloat(float f1, float f2){
		return f1*f2;
	}
	public static void main(String[] args){
		System.out.println(number);
		System.out.println(nome);
		System.out.println(td);
		System.out.println(tl);
		System.out.println(tf);
		System.out.println(funfloat(tf,tf));
	}
}