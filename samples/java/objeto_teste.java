class objeto_teste{
		
	public static void main(String argv[]){
		objeto obj1, obj2;
		obj1 = new objeto(3,5.0);
		obj2 = new objeto(-30000, -51.54);
		
		System.out.println(obj1.get_a());
		System.out.println(obj1.get_c());
		System.out.println(obj2.get_a());
		System.out.println(obj2.get_c());
		
		obj1.set_a(42);
		obj1.set_c(42.0);
		System.out.println(obj1.get_a());
		System.out.println(obj1.get_c());
	}
}