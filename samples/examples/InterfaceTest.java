public class InterfaceTest {

	public interface MyInterface {
		public void method(String s);
		public void method(long l);
	}
	
	public static class MyClass implements MyInterface {
		
		public void method(String s) {
			System.out.println(s);
		}
		
		public void method(long l) {
			System.out.println(l);
		}
	}
	
	public static void main(String[] args) {
		MyClass m = new MyClass();
		MyInterface i = (MyInterface)m;
		
		m.method("Test");
		m.method(125);
		
		i.method("After cast");
		i.method(250);
		
		
	}

}