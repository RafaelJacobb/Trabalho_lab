#include <stdio.h>
int main(){
  int jogador, computador, i = 0, c = 0;
  do{
    do{
      printf("Escolha uma opção\n");
      printf("1 Pedra, 2 Papel, 3 Tesoura, 4 Lagarto, 5 Spock ou -1 para sair\n");
      scanf("%d", &jogador);

      if(jogador == -1){
        printf("Fim de jogo");
        break;

        }else if(jogador <1 || jogador > 5)
        printf("opção inválida, tente novamente!\n\n");
      }while(jogador < 1 || jogador > 5);

    //Escolha do jogador
    
    if(jogador == -1){
      break;
    }

    if(jogador == 1)
      printf("Você escolheu Pedra.\n\n");
    if(jogador == 2)
      printf("Você escolheu Papel.\n\n");
    if(jogador == 3)
      printf("Você escolheu Tesoura.\n\n");
    if(jogador == 4)
      printf("Você escolheu Lagarto.\n\n");
    if(jogador == 5)
      printf("Você escolheu Spock.\n\n");

    //Escolha do computador

    srand(time(NULL));
     computador=("%d", rand()%3 + 1);

    if(computador == 1)
      printf("O computador escolheu Pedra.\n\n");
    if(computador == 2)
      printf("O computador escolheu Papel.\n\n");
    if(computador == 3)
      printf("O computador escolheu Tesoura.\n\n");
    if(computador == 4)
      printf("O computador escolheu Lagarto.\n\n");
    if(computador == 5)
      printf("O computador escolheu Spock.\n\n");

    //resultado

    //Empate
    
    if(jogador == computador){
      printf("Empate\n\n");
      }

    //Jogador vence
    
    if(jogador == 1 && computador == 3){
      printf("Você ganhou!\nA pedra quebrou a tesoura!\n\n");
      i = i + 1;
      }
    if(jogador == 2 && computador == 1){
      printf("Vcoê ganhou!\nO papel embrulhou a pedra!\n\n");
      i = i + 1;
      }
    if(jogador == 3 && computador == 2){
      printf("Você ganhou!\nA tesoura cortou o papel!\n\n");
      i = i + 1;
      }
    if(jogador == 1 && computador == 4){
      printf("Você ganhou!\nA pedra esmagou o lagarto!\n\n");
      i = i + 1;
      }
    if(jogador == 4 && computador == 5){
      printf("Você ganhou!\nO lagarto envenenou o Spock!\n\n");
      i = i + 1;
      }
    if(jogador == 5 && computador == 3){
      printf("Você ganhou!\nO Spock derreteu a tesoura!\n\n");
      i = i + 1;
      }
    if(jogador == 3 && computador == 4){
      printf("Você ganhou!\nA tesoura decapitou o lagarto\n\n");
      i = i + 1;
      }
    if(jogador == 4 && computador == 2){
      printf("Você ganhou!\nO lagarto comeu o papel\n\n");
      i = i + 1;
      }
    if(jogador == 2 && computador == 5){
      printf("Você ganhou!\nO papel refutou o Spock\n\n");
      i = i + 1;
      }
    if(jogador == 5 && computador == 1){
      printf("Você ganhou!\nO Spock vaporizou a pedra\n\n");
      i = i + 1;
      }

      //Jogador perde
      
    if(jogador == 1 && computador == 2){
      printf("Você perdeu!\nA pedra foi embrulhada pelo papel!\n\n");
      c = c +1;
      }
    if(jogador == 2 && computador == 3){
      printf("Você perdeu!\nO papel foi cortado pela tesoura\n\n");
      c = c +1;
      }
    if(jogador == 3 && computador == 1){
      printf("Você perdeu!\nA tesoura foi quebrada pela pedra\n\n");
      c = c +1;
      }
    if(jogador == 4 && computador == 3){
      printf("Você perdeu!\nO lagarto foi decapitado\n\n");
      c = c +1;
      }
    if(jogador == 4 && computador == 1){
      printf("Você perdeu!\nO lagarto foi esmagado\n\n");
      c = c +1;
      }
    if(jogador == 5 && computador == 4){
      printf("Você perdeu!\nO Spock foi envenenado\n\n");
      c = c +1;
      }
    if(jogador == 5 && computador == 2){
      printf("Você perdeu!\nO Spock foi refutado\n\n");
      c = c +1;
      }
    if(jogador == 3 && computador == 5){
      printf("Você perdeu!\nA tesoura foi derretida\n\n");
      c = c +1;
      }
    if(jogador == 2 && computador == 4){
      printf("Você perdeu!\nO Lagarto comeu o papel\n\n");
      c = c +1;
      }
    if(jogador == 1 && computador == 5){
      printf("Você perdeu!\nA pedra foi vaporizada\n\n");
      c = c +1;
      }
    
    }while(jogador != -1);
  printf("\n\nPlacar:\n Você: %d\n Computador:%d", i, c);
}
