class SuperClassInheritanceDemo {
   int age;

   SuperClassInheritanceDemo(int age) {
      this.age = age;
   }
}

public class InheritanceDemo extends SuperClassInheritanceDemo {
   InheritanceDemo(int age) {
      super(age);
   }

   public static void main(String argd[]) {
      InheritanceDemo s = new InheritanceDemo(24);
   }
}
