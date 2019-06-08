class IntegerDemo {

  static int TESTEDOCARALHO(int arg) {
    return arg;
  }

  public static void main(String[] args) {
    int e1 = 5;
    System.out.println(e1);
    int e2 = 3;
    System.out.println(e2);

    int e3 = e1 + e2;
    System.out.println(e3);
    int e4 = e1 - e2;
    System.out.println(e4);
    int e5 = e1 / e2;
    System.out.println(e5);
    int e6 = e1 * e2;
    System.out.println(e6);
    int e7 = e1 % e2;
    System.out.println(e7);

    double i1 = 2.0;
    int e8 = (int)(i1);
    System.out.println(e8);

    long i2 = 1l;
    int e9 = (int)(i2);
    System.out.println(e9);

    float i3 = 1.0f;
    int e10 = (int)(i3);
    System.out.println(e10);

    short i4 = 5;
    int e11 = (int)(i4);
    System.out.println(e11);

    System.out.println(TESTEDOCARALHO(e1));
  }
}
