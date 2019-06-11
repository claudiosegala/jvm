class testeMetObj{
	//testa passasem de parametros(normal array e multdimentional array), retornos e polimorfismo

	public int testeInt(int i){
		int res = i+i;	//res = 2*i
		res = res-i;		//res = i
		res = res/i;		//res = 1
		res = res*i;		//res = i	
		res = res<<1;		//res = res*2	
		return res;
	}
	public long testeLong(long i){
		long res = i+i;	//res = 2*i
		res = res-i;		//res = i
		res = res/i;		//res = 1
		res = res*i;		//res = i
		res = res<<1;		//res = res*2	
		return res;
	}
	public float testeFloat(float i){
		float res = i+i;	//res = 2*i
		res = res-i;		//res = i
		res = res/i;		//res = 1
		res = res*i;		//res = i
		return res;
	}
	public double testeDouble(double i){
		double res = i+i;	//res = 2*i
		res = res-i;		//res = i
		res = res/i;		//res = 1
		res = res*i;		//res = i
		return res;
	}
	public int testeInt(int[] i, int lim){
		int res,j;
		res = 0;
		for(j=0;j<lim;j++){
			res = res+i[j];	//res = somatoria de i 
		}
		return res;
	}
	public long testeLong(long[] i, int lim){
		long res;
		int j;
		res = 0;
		for(j=0;j<lim;j++){
			res = res+i[j];	//res = somatoria de i 
		}
		return res;
	}
	public float testeFloat(float[] i, int lim){
		float res;
		int j;
		res = 0;
		for(j=0;j<lim;j++){
			res = res+i[j];	//res = somatoria de i 
		}
		return res;
	}
	public double testeDouble(double[] i, int lim){
		double res;
		int j;
		res = 0;
		for(j=0;j<lim;j++){
			res = res+i[j];	//res = somatoria de i 
		}
		return res;
	}

	public int testeInt(int[][] i, int lim1, int lim2){
		int res;
		int j1,j2;
		res = 0;
		for(j1=0;j1<lim1;j1++){
			for(j2=0;j2<lim2;j2++){
				res = res+i[j1][j2];	//res = somatoria de i 
			}
		}
		return res;
	}
	public long testeLong(long[][] i, int lim1, int lim2){
		long res;
		int j1,j2;
		res = 0;
		for(j1=0;j1<lim1;j1++){
			for(j2=0;j2<lim2;j2++){
				res = res+i[j1][j2];	//res = somatoria de i 
			}
		}
		return res;
	}
	public float testeFloat(float[][] i, int lim1, int lim2){
		float res;
		int j1,j2;
		res = 0;
		for(j1=0;j1<lim1;j1++){
			for(j2=0;j2<lim2;j2++){
				res = res+i[j1][j2];	//res = somatoria de i 
			}
		}
		return res;
	}
	public double testeDouble(double[][] i, int lim1, int lim2){
		double res;
		int j1,j2;
		res = 0;
		for(j1=0;j1<lim1;j1++){
			for(j2=0;j2<lim2;j2++){
				res = res+i[j1][j2];	//res = somatoria de i 
			}
		}
		return res;
	}

}