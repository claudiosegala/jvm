/*
 * Compile assim: javac long_load.java -target 1.2 -source 1.2
 */
public class long_load{
	public static void main(String args[]){
		long array[] = {10,20,30};
		long a=array[2];
		System.out.println(a);
		
		/*ldc*/
		
		/*ldc_w*/
		
		/*ldc2_w*/
		long ldc_w=1000000;
		System.out.println(ldc_w);
		
		/*lcont_0*/
		long test1=0;
		System.out.println(test1);
		
		/*lcont_1*/
		long test2=1;
		System.out.println(test2);

	}
}