class Poupanca extends Conta{ 
  Poupanca(double depositoInicial){ 
    super(depositoInicial); 
  } 
  void atualizacaoMensal(){ 
    creditar(obterSaldo()*(0.06/12.)); 
  } 
} 