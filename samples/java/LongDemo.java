class LongDemo {
    static long vaiporra(long args) {
        return args;
    }

  public static void main(String[] args) {
    long e1 = 5L;
    System.out.println(e1);
    long e2 = 3L;

    long e3 = e1 + e2;
    System.out.println(e3);

    long e4 = e1 - e2;
    System.out.println(e4);

    long e5 = e1/e2;
    System.out.println(e5);

    long e6 = e1 * e2;
    System.out.println(e6);

    long mod = e1 % e2;
    System.out.println(mod);

    int i1 = 6;
    long e7 = (long) i1;
    System.out.println(e7);

    float i2 = 8.2f;
    long e8 = (long) i2;
    System.out.println(e8);

    double i3 = 5.5;
    long e9 = (long) i3;
    System.out.println(e9);

    short i4 = 5;
    long e10 = (long) i4;
    System.out.println(e10);

    System.out.println(vaiporra(e1));

  }
}
