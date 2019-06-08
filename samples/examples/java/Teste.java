class Teste {

  static void foo(){
    System.out.println("foo");
  }

  public static void main(String[] args) {
    int a = 10;
    System.out.println(a);
    int b = 15;
    System.out.println(b);

    int c = a + b;
    System.out.println(c);
    int d = b - a + 2;
    System.out.println(d);
    foo();
  }
}
