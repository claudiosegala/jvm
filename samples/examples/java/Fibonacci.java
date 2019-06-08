public class Fibonacci {
  
    static long fibo(int n) {
        int F = 0;     // atual
        int ant = 0;   // anterior
  
        for (int i = 1; i <= n; i++) {
  
            if (i == 1) {
                F = 1;
                ant = 0;
            } else {
                F += ant;
                ant = F - ant;
            }
  
        }
  
        return F;
    }
  
    public static void main(String[] args) {
  
    // teste do programa. Imprime os 30 primeiros termos
        for (int i = 0; i < 30; i++) {
            System.out.print("(" + i + "):" + Fibonacci.fibo(i) + "\t");
        }
  
    }
  
}