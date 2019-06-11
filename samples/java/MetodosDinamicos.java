class Geek {
    int num;
    String name;

    Geek() {
      System.out.println("Constructor called");
    }
}

class GFG {
    public static void main (String[] args) {
        Geek geek1 = new Geek();

        System.out.println(geek1.name);
        System.out.println(geek1.num);
    }
}
