/*
 Saida esperada:
100000
1
2
3
4
5
6
7
8
9
2.000000
3.000000
-5.000000
-5
3
6426246
-433242
2.000000
3.000000
-5.000000
-2
4
0
a
0
)
15
1000
-2
 */
class vetor{
	
	public static void main(String argv[]){
		int array[] = new int[10];
		double array2[] = {2.0,3.0,-5.0};
		long array3[] = {-5, 3, 6426246, -433242};
		float array4[] = {2.0f,3.0f,-5.0f};
		byte array5[] = {-2, 4, 0};
		char array6[] = {'a', '0', ')'};
		short array7[] = {15, 1000, -2};
	
		for (int i = 0; i < 10; i++){
			array[i] = i;
		}
		array[0] += 100000;
		for (int i = 0; i < 10; i++){
			System.out.println(array[i]);
		}
		System.out.println();


		for (int i = 0; i < 3; i++){
			System.out.println(array2[i]);
		}
		System.out.println();
		
		for (int i = 0; i < 4; i++){
			System.out.println(array3[i]);
		}
		System.out.println();

		for (int i = 0; i < 3; i++){
			System.out.println(array4[i]);
		}
		System.out.println();

		for (int i = 0; i < 3; i++){
			System.out.println(array5[i]);
		}
		System.out.println();

		for (int i = 0; i < 3; i++){
			System.out.println(array6[i]);
		}
		System.out.println();

		for (int i = 0; i < 3; i++){
			System.out.println(array7[i]);
		}
		System.out.println();
	}
}