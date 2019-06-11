class multi{
	public static void main(String argv[]){
		int vetor_int[][] = new int[5][5];
		int vetor_int3[][][] = new int [5][4][3];
		double vetor_double[][] = new double[4][3];
		int k;
		double k_aux;
		
		k = 0;
		/*Seta a matriz de ints*/
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 5; j++){
				vetor_int[i][j] = k;
				k++;
			}
		}
		k_aux = 0.0;
		/*Seta a matriz de doubles*/
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 3; j++){
				vetor_double[i][j] = k_aux;
				k_aux += 2.0;
			}
		}
		/*Imprime a matriz de ints*/
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 5; j++){
				System.out.println(vetor_int[i][j]);
			}
		}
		/*Imprime a matriz de doubles*/
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 3; j++){
				System.out.println(vetor_double[i][j]);
			}
		}
		
		/*Três dimensões!*/
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 4; j++){
				for (k = 0; k < 3; k++){
					vetor_int3[i][j][k] = i+j+k;
				}
			}
		}
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 4; j++){
				for (k = 0; k < 3; k++){
					System.out.println(vetor_int3[i][j][k]);
				}
			}
		}
	}
}