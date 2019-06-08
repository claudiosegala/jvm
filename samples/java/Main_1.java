class Main_1{ 
  static void escreveSaldo(Conta c){ 
    System.out.println("Saldo da conta:"+ c.obterNumero()+" e' "+c.obterSaldo()); 
  } 
  public static void main(String[] args){ 
    Conta v1; 
    Poupanca v2; 
    v2=new Poupanca(100.); 
    escreveSaldo(v2); 
    v2.atualizacaoMensal(); 
    escreveSaldo(v2); 
    v1=new Conta(50.); 
    escreveSaldo(v1); 
  } 
}