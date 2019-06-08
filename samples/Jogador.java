/*
 */

public class Jogador {
	public String nome;
	public int pontuacao;
	public int cardCounter;
	public Carta []cartas;
	
	public Jogador(String name){
		nome = name;
		cardCounter = 0;
		cartas = new Carta[13];
		for(int i = 0;i<13;i++){
			cartas[i] = new Carta(1,"",1);
		}
		pontuacao = 0;
	}
	public void addCarta(Carta card){
		cartas[cardCounter] = card;
		cardCounter++;
	}
	
	public Carta primeiroJogador(){
		Carta retorno = new Carta(1,"",1);
		for(int i=0;i<13;i++){
			if(cartas[i]!=null){
				retorno = cartas[i];
				cardCounter--;
				cartas[i]=null;
				return(retorno);
			}
		}
		return(null);
	}
	public Carta play(int naipe){
		Carta retorno = new Carta(1,"",1);
		for(int i=0;i<cartas.length;i++){
			if(cartas[i] == null);
			else if(cartas[i].naipe == naipe){
				retorno = cartas[i];
				cartas[i] = null;
				cardCounter--;
				return(retorno);
			}
		}
		
		return(primeiroJogador());
	}
	
	public void ganheiRodada(Carta[] cartas){
		for(int i=0;i<4;i++){
			pontuacao+=cartas[i].valor;
		}
	}
}
