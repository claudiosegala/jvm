class SubclassMethod {

	protected int a;

	static class InnerClass extends SubclassMethod {

		protected int b;
	
		public InnerClass() {
			a = 10;
			b = 20;
		}
		
		public void add() {
			b = a + b;
		}
		
		public void sub() {
			b = a - b;
		}
	
	}
	
	public void sub(int n) {
		a = a - n;
	}
	
	public static void main(String[] args) {
		InnerClass c = new InnerClass();
		System.out.println(c.a);
		System.out.println(c.b);
		c.add();
		System.out.println(c.a);
		System.out.println(c.b);
		c.sub();
		System.out.println(c.a);
		System.out.println(c.b);
		c.sub(12);
		System.out.println(c.a);
		System.out.println(c.b);
	}

}