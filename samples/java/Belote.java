/*
 */

public class Belote {
	private static Jogador[] jogadores;
	private static Carta[] baralho;
	
	public static String retornaNome(int naipe){
		if(naipe==0){
			return("Paus");
		}
		else if(naipe==1){
			return("Ouros");
		}
		else if(naipe==2){
			return("Copas");
		}
		else if(naipe==3){
			return("Espadas");
		}
		return(null);
	}
	public static void printStatus(){
		for(int i=0;i<4;i++){
			System.out.println("\nCartas de ");
			System.out.println(jogadores[i].nome);
			System.out.println("\n");
			for(int j=0;j<13;j++){
				System.out.println(jogadores[i].cartas[j].nome);
				System.out.println(" de ");
				System.out.println(Belote.retornaNome(jogadores[i].cartas[j].naipe));
			}
		}
		System.out.println("\n");
		return;
	}
	
	public Belote(){
		String[] nomes = {"Adam","Bob","Charlie","Daniel"};
		String[] cartaValores = {"As","Dois","Tres","Quatro","Cinco","Seis","Sete","Oito",
			"Nove","Dez","Valete","Dama","Rei"};
		jogadores = new Jogador[4];
		baralho = new Carta[4*13];
		
		for(int i=0;i<4;i++){
			jogadores[i] = new Jogador(nomes[i]);
			System.out.println(jogadores[i].nome);
		}
		
		
		for( int i=0;i<4;i++){
			for(int j=0;j<13;j++){
				baralho[i*13+j] = new Carta(i,cartaValores[j],j+1);
				System.out.println(baralho[i].nome);
			}
		}
		Belote.shuffle(baralho);
		for(int i = 0;i<4;i++){
			for(int j=0;j<13;j++)
			jogadores[i].addCarta(baralho[i*13+j]);
		}
	}
	
	public static void shuffle(Carta[] baralho){
		int j;
		Carta swap = new Carta(1,"1",1);
		for(int i=0;i<52;i++){
			j = (int)(51);
			swap = baralho[i];
			baralho[i] = baralho[j];
			baralho[j] = swap;
		}
	}
	public static void main(String[] args){
		Belote jogo = new Belote();
		Belote.printStatus();
		int i,j,provavelGanhador;
		Carta mesa[] = new Carta[4];
		for(int k=0;k<4;k++){
			mesa[k] = new Carta(1,"1",1);
		}
		j=0;
		mesa[j] = jogadores[j].primeiroJogador();
		while(mesa[j]!=null){
			provavelGanhador=j;
			for(i=0;i<4;i++){
				if(i!=j){
					mesa[i] = jogadores[i].play(mesa[j].naipe);
					if(mesa[i].valor > mesa[provavelGanhador].valor && 
						mesa[i].naipe == mesa[provavelGanhador].naipe){
						provavelGanhador=i;
					}
				}
			}
			
			System.out.println(jogadores[j].nome);
			System.out.println(" comecou jogando\n");
			System.out.println("As cartas jogadas foram: ");
			for(i=0;i<4;i++){
				System.out.println(jogadores[i].nome);
				System.out.println(" jogou ");
				System.out.println(mesa[i].nome);
				System.out.println(" de ");
				Belote.retornaNome(mesa[i].naipe);
			}
			jogadores[provavelGanhador].ganheiRodada(mesa);
			j = provavelGanhador;
			System.out.println("\n\n");
			System.out.println(jogadores[j].nome);
			System.out.println(" Ganhou a rodada\n\n");
			mesa[j] = Belote.jogadores[j].primeiroJogador();
			
		}
		
		System.out.println("Pontuacao dos jogadores.\n");
		System.out.println(jogadores[0].nome);
		System.out.println( " =  ");
		System.out.println(jogadores[0].pontuacao);
		
		System.out.println(jogadores[1].nome);
		System.out.println( " =  ");
		System.out.println(jogadores[1].pontuacao);

		System.out.println(jogadores[2].nome);
		System.out.println( " =  ");
		System.out.println(jogadores[2].pontuacao);

		System.out.println(jogadores[3].nome);
		System.out.println( " =  ");
		System.out.println(jogadores[3].pontuacao);
		
	}
}
