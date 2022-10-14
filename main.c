#include <stdio.h>
int main(){
  int jogador, computador, i = 0, c = 0;
  do{
    do{
      printf("Escolha uma opção\n");
      printf("1 pedra, 2 papel, 3 tesoura ou -1 para sair\n");
      scanf("%d", &jogador);

      if(jogador == -1){
        printf("Fim de jogo");
        break;

        }else if(jogador <1 || jogador > 3)
        printf("opção inválida, tente novamente!\n\n");
      }while(jogador < 1 || jogador > 3);

    //Escolha do jogador
    
    if(jogador == -1){
      break;
    }

    if(jogador == 1)
      printf("Você escolheu pedra.\n\n");
    if(jogador == 2)
      printf("Você escolheu papel.\n\n");
    if(jogador == 3)
      printf("Você escolheu tesoura.\n\n");

    //Escolha do computador

    srand(time(NULL));
     computador=("%d", rand()%3 + 1);

    if(computador == 1)
      printf("O computador escolheu pedra.\n\n");
    if(computador == 2)
      printf("O computador escolheu papel.\n\n");
    if(computador == 3)
      printf("O computador escolheu tesoura.\n\n");

    //resultado

    //Empate
    
    if(jogador == computador){
      printf("Empate\n\n");
      }

    //Jogador vence
    
    if(jogador == 1 && computador == 3){
      printf("Você ganhou!\n\n");
      i = i + 1;
      }
    if(jogador == 2 && computador ==1){
      printf("Vcoê ganhou!\n\n");
      i = i + 1;
      }
    if(jogador == 3 && computador == 2){
      printf("Você ganhou!\n\n");
      i = i + 1;
      }

      //Jogador perde
      
    if(jogador == 1 && computador == 2){
      printf("Você perdeu!\n\n");
      c = c +1;
      }
    if(jogador == 2 && computador == 3){
      printf("Você perdeu!\n\n");
      c = c +1;
      }
    if(jogador == 3 && computador == 1){
      printf("Você perdeu!\n\n");
      c = c +1;
      }
    
    }while(jogador != -1);
  printf("\nPlacar:\n Você: %d\n Computador:%d", i, c);
}