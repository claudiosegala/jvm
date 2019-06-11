class Conta extends Object{ 
  static private int contador=0; 
  private int numero; 
  private double saldo; 
  Conta(double depositoInicial){ 
   saldo=depositoInicial; 
   numero=contador++; 
  } 
  int obterNumero(){ return numero;} 
  double obterSaldo(){ return saldo;} 
  void debitar(double quantia){saldo=saldo-quantia;} 
  void creditar(double quantia){saldo=saldo+quantia;} 
}


