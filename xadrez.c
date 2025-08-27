#include <stdio.h>

int main(){

  // Variáveis para controlar os movimentos das peças
  int torre = 0; 
  int bispo = 0;
  int rainha;
  int cavalo=1;

  // Loop while: torre se move para a direita 5 vezes
  while (torre < 5)
  {
    printf("A Torre movimento paraa direção : Direita\n");
    torre++;  // incrementa o contador da torre
  };

  // Loop do-while: bispo se move para cima e para a direita 5 vezes
  do{
    printf("O Bispo andou para a direção : Cima,Direita\n");
    bispo++; // incrementa o contador do bispo
  }while (bispo < 5);

  // Loop for: rainha se move para a esquerda 8 vezes
  for(rainha=0; rainha<8; rainha++){
    printf("A Rainha andou para a direção : Esquerda\n");
  };

// Loop aninhado: Um movimento em L para o cavalo 
  while (cavalo ==1)
  {
    for(int i =0; i<2; i++){
      printf("Cima\n");
    }
    printf("Direita\n");
   cavalo--;
  };
  



  return 0; 
}
