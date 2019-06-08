class TesteSwitch{
	public int a;
	int main(){
		a = 10;
		switch(a){
			case (1):
				System.out.println(a+1);
			case (2):
				System.out.println(a+2);
			case (3):
				System.out.println(a+3);
			case (4):
				System.out.println(a+4);
			default:
				System.out.println(a+5);
		}
		return 0;
	}
}