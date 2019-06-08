/*
Saida
Passou >
Passou <
Passou ==
Passou <=
Passou !(<=)
Agora com long
Passou >
Passou <
Passou ==
Passou <=
Passou !(<=)
Agora com float
Passou >
Passou <
Passou ==
Passou <=
Passou !(<=)
Agora com double
Passou >
true
Passou <
Passou ==
Passou <=
Passou !(<=)
*/

class testeLogArit{
	public static void main(String[] args){
		int num = 2;
		int res;
		res = num+num;
		if(res>num){
			System.out.println("Passou >");
		}
		res = num-num;
		if(res<num){
			System.out.println("Passou <");
		}
		res = num*num;
		if(res == res){
			System.out.println("Passou ==");
		}
		res = num/num;
		res = res<<1;
		res = res|1;
		res = res&3;
		res = ~res;
		res = ~res;
		res = res^3;
		if(res <= num){
			System.out.println("Passou <=");
		}
		res = num%num;
		if(!(res >= num)){
			System.out.println("Passou !(<=)");
		}

		System.out.println("Agora com long");
		long numl = 2;
		long resl;
		resl = numl+numl;
		if(resl>numl){
			System.out.println("Passou >");
		}
		resl = numl-numl;
		if(resl<numl){
			System.out.println("Passou <");
		}
		resl = numl*numl;
		if(resl == resl){
			System.out.println("Passou ==");
		}
		resl = numl/numl;
		resl = resl<<1;
		resl = resl|1;
		resl = resl&3;
		resl = ~resl;
		resl = ~resl;
		resl = resl^3;
		if(resl <= numl){
			System.out.println("Passou <=");
		}
		resl = numl%numl;
		if(!(resl >= numl)){
			System.out.println("Passou !(<=)");
		}

		System.out.println("Agora com float");
		float numf = 2.0F;
		float resf;
		resf = numf+numf;
		if(resf>numf){
			System.out.println("Passou >");
		}
		resf = numf-numf;
		if(resf<numf){
			System.out.println("Passou <");
		}
		resf = numf*numf;
		if(resf == resf){
			System.out.println("Passou ==");
		}
		resf = numf/numf;
		resf = -resf;
		resf = -resf;
		if(resf <= numf){
			System.out.println("Passou <=");
		}
		resf = numf%numf;
		if(!(resf >= numf)){
			System.out.println("Passou !(<=)");
		}

		System.out.println("Agora com double");
		double numd = 2.0;
		double resd;
		resd = numd+numd;
		if(resd>numd){
			System.out.println("Passou >");
		}
		resd = numd-numd;
		if(resd<numd){
			System.out.println("Passou <");
		}
		resd = numd*numd;
		if(resd == resd){
			System.out.println("Passou ==");
		}
		resd = numd/numd;
		resd = -resd;
		resd = -resd;
		if(resd <= numd){
			System.out.println("Passou <=");
		}
		resd = numd%numd;
		if(!(resd >= numd)){
			System.out.println("Passou !(<=)");
		}
	}
}