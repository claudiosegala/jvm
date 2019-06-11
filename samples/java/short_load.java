/*
 * Compile assim: javac short_load.java -target 1.2 -source 1.2
 */
public class short_load{
	public static void main(String args[]){
		short array[] = {10,20,30};
		short a=array[2];
		System.out.println(a);
		
		/*ldc*/
		
		/*ldc_w*/
		
		/*ldc2_w*/
		short sw=100;
		System.out.println(sw);
		
		/*lcont_0*/
		short test1=0;
		System.out.println(test1);
		
		/*lcont_1*/
		short test2=1;
		System.out.println(test2);

	}
}