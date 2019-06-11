class testeMultArray{
	static int[][] vetint;
	static long[][] vetlong;
	static byte[][] vetbyte;
	static float[][] vetfloat;
	static double[][] vetdouble;

	static void printint(int[][] val){
		int i,j;	
		for(i=0; i<2; i++){
			for(j=0;j<2;j++){
				System.out.println(val[i][j]);
			}
		}
	}

	static void printlong(long[][] val){
		int i,j;	
		for(i=0; i<2; i++){
			for(j=0;j<2;j++){
				System.out.println(val[i][j]);
			}
		}
	}

	static void printbyte(byte[][] val){
		int i,j;	
		for(i=0; i<2; i++){
			for(j=0;j<2;j++){
				System.out.println(val[i][j]);
			}
		}
	}

	static void printfloat(float[][] val){
		int i,j;	
		for(i=0; i<2; i++){
			for(j=0;j<2;j++){
				System.out.println(val[i][j]);
			}
		}
	}

	static void printdouble(double[][] val){	
		int i,j;	
		for(i=0; i<2; i++){
			for(j=0;j<2;j++){
				System.out.println(val[i][j]);
			}
		}
	}

	public static void main(String[] args){
		
		vetint = new int[2][2];
		vetlong  = new long[2][2];
		vetfloat = new float[2][2];
		vetbyte = new byte[2][2];
		vetdouble = new double[2][2];
		int i,j;
		for(i=0; i<2; i++){
			for(j=0;j<2;j++){
				vetint[i][j] = 10;
				vetlong[i][j] = 15;
				vetbyte[i][j] = 20;
				vetfloat[i][j] = 25.0F;
				vetdouble[i][j] = 30.0;
			}
		}
		printint(vetint);
		printlong(vetlong);
		printbyte(vetbyte);
		printfloat(vetfloat);
		printdouble(vetdouble);

	}
}