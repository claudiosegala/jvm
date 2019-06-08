class testeArray{
	static int[] vetint;
	static long[] vetlong;
	static byte[] vetbyte;
	static float[] vetfloat;
	static double[] vetdouble;

	static void printint(int[] val){
		int i;	
		for(i=0;i<5; i++){
			System.out.println(val[i]);
		}
	}

	static void printlong(long[] val){
		int i;	
		for(i=0;i<5; i++){
			System.out.println(val[i]);
		}
	}

	static void printbyte(byte[] val){
		int i;	
		for(i=0;i<5; i++){
			System.out.println(val[i]);
		}
	}

	static void printfloat(float[] val){
		int i;	
		for(i=0;i<5; i++){
			System.out.println(val[i]);
		}
	}

	static void printdouble(double[] val){	
		int i;
		for(i=0;i<5; i++){
			System.out.println(val[i]);
		}
	}

	public static void main(String[] args){
		
		vetint = new int[5];
		vetlong  = new long[5];
		vetfloat = new float[5];
		vetbyte = new byte[5];
		vetdouble = new double[5];
		int i;
		for(i=0; i<5; i++){
			vetint[i] = 10;
			vetlong[i] = 15;
			vetbyte[i] = 20;
			vetfloat[i] = 25.0F;
			vetdouble[i] = 30.0;
		}
		printint(vetint);
		printlong(vetlong);
		printbyte(vetbyte);
		printfloat(vetfloat);
		printdouble(vetdouble);

	}
}