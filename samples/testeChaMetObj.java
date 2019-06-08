class testeChaMetObj{
	//vetores unidimensionais
	static int[] vetint1;
	static long[] vetlong1;
	static float[] vetfloat1;
	static double[] vetdouble1;
	//vetores bidimencionais(poderia ser mais,mas se funciona para 2 funciona para todos)
	static int[][] vetint2;
	static long[][] vetlong2;
	static float[][] vetfloat2;
	static double[][] vetdouble2;
	public static void main(String[] args){
		int resi;
		long resl;
		float resf;
		double resd;
		//inicialização
		vetint1 = new int[2];
		vetlong1  = new long[2];
		vetfloat1 = new float[2];
		vetdouble1 = new double[2];

		vetint2 = new int[2][2];
		vetlong2  = new long[2][2];
		vetfloat2 = new float[2][2];
		vetdouble2 = new double[2][2];
		int i,j;
		for(i=0; i<2; i++){
			vetint1[i] = 1;
			vetlong1[i] = 2;
			vetfloat1[i] = 4.0F;
			vetdouble1[i] = 5.0F;
			for(j=0;j<2;j++){
				vetint2[i][j] = 1;
				vetlong2[i][j] = 2;
				vetfloat2[i][j] = 4.0F;
				vetdouble2[i][j] = 5.0F;
			}
		}
		testeMetObj tmo = new testeMetObj();
		//testes
		resi = tmo.testeInt(vetint2[0][0]);
		System.out.println("Int variavel");
		System.out.println(resi);
		resi = tmo.testeInt(vetint1,2);
		System.out.println("Int array unidimencional");
		System.out.println(resi);
		resi = tmo.testeInt(vetint2,2,2);
		System.out.println("Int arraymultidimensional");
		System.out.println(resi);

		resl = tmo.testeLong(vetlong2[0][0]);
		System.out.println("Long variavel");
		System.out.println(resl);
		resl = tmo.testeLong(vetlong1,2);
		System.out.println("Long array unidimencional");
		System.out.println(resl);
		resl = tmo.testeLong(vetlong2,2,2);
		System.out.println("Long arraymultidimensional");
		System.out.println(resl);


		resf = tmo.testeFloat(vetfloat2[0][0]);
		System.out.println("Float variavel");
		System.out.println(resf);
		resf = tmo.testeFloat(vetfloat1,2);
		System.out.println("Float array unidimencional");
		System.out.println(resf);
		resf = tmo.testeFloat(vetfloat2,2,2);
		System.out.println("Float arraymultidimensional");
		System.out.println(resf);

		resd = tmo.testeDouble(vetdouble2[0][0]);
		System.out.println("Double variavel");
		System.out.println(resd);
		resd = tmo.testeDouble(vetdouble1,2);
		System.out.println("Double array unidimencional");
		System.out.println(resd);
		resd = tmo.testeDouble(vetdouble2,2,2);
		System.out.println("Double arraymultidimensional");
		System.out.println(resd);

	}
	
}