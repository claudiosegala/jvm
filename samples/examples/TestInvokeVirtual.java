class TestInvokeVirtual {
	
	static class A {
	
		public static int i = 1;
	
		public void m() {
			System.out.println("calling m from A");
			System.out.println(i);
		}
	}
	
	static class B extends A {
	
		public static int i = 2;
	
		public void m() {
			System.out.println("calling m from B");
			System.out.println(i);
		}
	}

	public static void main(String[] args) {
		A c1 = new A();
		A c2 = new B();
		B c3 = new B();
		
		c1.m();
		c2.m();
		c3.m();
	}
	
}