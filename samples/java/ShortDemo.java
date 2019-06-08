class ShortDemo {

  static short TESTEDOCARALHO(short arg) {
    return arg;
  }

  public static void main(String[] args) {
    short e1 = 5;
    System.out.println(e1);
    short e2 = 3;
    System.out.println(e2);

    short e3 = (short) (e1 + e2);
    System.out.println(e3);
    short e4 = (short) (e1 - e2);
    System.out.println(e4);
    short e5 = (short) (e1 / e2);
    System.out.println(e5);
    short e6 = (short) (e1 * e2);
    System.out.println(e6);
    short e7 = (short) (e1 % e2);
    System.out.println(e7);

    int i1 = 1;
    short e8 = (short)(i1);
    System.out.println(e8);

    long i2 = 1l;
    short e9 = (short)(i2);
    System.out.println(e9);

    float i3 = 1.0f;
    short e10 = (short)(i3);
    System.out.println(e10);

    double i4 = 5.0;
    short e11 = (short)(i4);
    System.out.println(e11);

    System.out.println(TESTEDOCARALHO(e1));
  }
}
