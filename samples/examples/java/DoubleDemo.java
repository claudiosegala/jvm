class DoubleDemo {

  static double TESTEDOCARALHO(double arg) {
    return arg;
  }

  public static void main(String[] args) {
    double e1 = 5.4;
    System.out.println(e1);
    double e2 = 3.5;
    System.out.println(e2);

    double e3 = e1 + e2;
    System.out.println(e3);
    double e4 = e1 - e2;
    System.out.println(e4);
    double e5 = e1 / e2;
    System.out.println(e5);
    double e6 = e1 * e2;
    System.out.println(e6);
    double e7 = e1 % e2;
    System.out.println(e7);

    int i1 = 1;
    double e8 = (double)(i1);
    System.out.println(e8);

    long i2 = 1l;
    double e9 = (double)(i2);
    System.out.println(e9);

    float i3 = 1.0f;
    double e10 = (double)(i3);
    System.out.println(e10);

    short i4 = 5;
    double e11 = (double)(i4);
    System.out.println(e11);

    System.out.println(TESTEDOCARALHO(e1));
  }
}
