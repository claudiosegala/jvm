class FloatDemo {
  static float TESTEDOCARALHO(float arg) {
    return arg;
  }

  public static void main(String[] args) {
    float f1 = 3.14f;
    System.out.println(f1);
    float f2 = 6.28f;
    System.out.println(f2);

    float f3 = f1 + f2;
    System.out.println(f3);
    float f4 = f1 - f2;
    System.out.println(f4);
    float f5 = f1 / f2;
    System.out.println(f5);
    float f6 = f1 * f2;
    System.out.println(f6);

    int i = 1;
    float f7 = (float)(i);
    System.out.println(f7);

    long l = 1l;
    float f8 = (float)(l);
    System.out.println(f8);

    double d = 1.0;
    float f9 = (float)(d);
    System.out.println(f9);

    System.out.println(TESTEDOCARALHO(f1));
  }
}
