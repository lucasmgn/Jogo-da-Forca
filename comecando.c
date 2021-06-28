#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

 //define é uma constante

int main() {
  printf("        P  /_\\  P                              \n");
  printf("       /_\\_|_|_/_\\                            \n");
  printf("   n_n | ||. .|| | n_n         Bem vindo ao     \n");
  printf("   |_|_|nnnn nnnn|_|_|     Jogo de Adivinhaçao! \n");
  printf("  |" "  |  |_|  |"  " |                         \n");
  printf("  |_____| ' _ ' |_____|                         \n");
  printf("        \\__|_|__/                              \n");
  printf("\n\n");
 
  int segundos = time(0);
  srand(segundos);
  int numerogrande = rand(); 
  int numerosecreto =numerogrande % 100; 
  int chute;
  int tentativas = 1;
  float pontos = 1000;
  int acertou = 0;

  int nivel;
  printf("Qual o nivel de difucldade?\n");
  printf("(1) facil, (2) medio (3) dificil\n\n");
  printf("Escolha: ");
  scanf("%d", &nivel);

  int numerodetentativas;

  switch (nivel){

    case 1: numerodetentativas = 20;
    break;

    case 2: numerodetentativas = 15;
    break;
    
    default: numerodetentativas = 10;
    break;
 
  }
  for(int i =1; i<= numerodetentativas; i++) {
    printf("Tentativa %d\n", tentativas);
    printf("Qual e o seu palpite?");
    scanf("%d", &chute);
    printf("Seu chute foi o numero: %d\n", chute); 

	  if(chute < 0){
      printf("Voce nao pode chutar numeros negativos!!\n");
      continue; // ou poderia colocar como else if o proximo bloco depois da váriavel
    }  

    int acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;

    if(acertou){
      break;	    
    }
		   	
	  else if(maior){
		  printf("Seu chute foi maior do que o numero secreto! \n");
		}

    else{
      printf("Seu chute foi menor do que o numero secreto!! \n");
    }	

    tentativas++;
    float pontosperdidos = abs(numerosecreto - chute)/(float)2; 
    pontos = pontos - pontosperdidos;

  }
    printf("Fim do Jogo!!\n");

    if(acertou){

      printf("\n\n");
      printf("                OOOOOOOOOOO              \n");            //imagem de ascii art  
      printf("            OOOOOOOOOOOOOOOOOOO          \n");
      printf("        OOOOOO  OOOOOOOOO  OOOOOO        \n");
      printf("      OOOOOO      OOOOO      OOOOOO      \n");
      printf("    OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
      printf("   OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
      printf("  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
      printf("  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
      printf("  OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
      printf("  OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO    \n");
      printf("   OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO     \n");
      printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO       \n");
      printf("      OOOOOO   OOOOOOOOO   OOOOOO        \n");
      printf("         OOOOOO         OOOOOO           \n");
      printf("             OOOOOOOOOOOOO               \n");
      printf("\n\n");
      printf(" Vce ganhou!!\n");
      printf("Voce acertou em %d tentativas\n", tentativas);
      printf("Total de pontos: %.1f \n", pontos);
    }
    else{
      printf("\n\n");
      printf("  \\|/ ____ \\|/  \n");     
      printf("   @~/ ,. \\~@    \n");     
      printf("  /_( \\__/ )_\\  \n");    
      printf("     \\__U_/       \n");
      printf("\n\n");
      printf("Voce perdeu!! Tente de novo");

    }
      
 
    
 return(0);    
}  
	
  	
   	
   	

	

