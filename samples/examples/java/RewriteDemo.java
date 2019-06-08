class SuperClassRewriteDemo {
  protected double salario = 100;

  public double getBonificacao() {
      return this.salario * 0.10;
  }
}

class SubClassRewriteDemo extends SuperClassRewriteDemo {
   public double getBonificacao() {
      return this.salario * 0.50;
   }
 }

public class RewriteDemo {
  public static void main (String args[]) {
    SubClassRewriteDemo gerente = new SubClassRewriteDemo();
    gerente.getBonificacao();
  }
}
