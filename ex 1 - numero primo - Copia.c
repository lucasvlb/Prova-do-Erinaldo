#include<stdio.h>
#include<locale.h>

/*1. Crie uma fun��o que receba um n�mero inteiro de 1 a 10 e retorne 1 se o n�mero
for primo. Caso contr�rio, n�o retorne nada. Voc� n�o pode usar la�os de repeti��o,
por essa raz�o, limite a verifica��o a um conjunto pequeno de n�meros para
verificar se s�o primos. Um n�mero primo � divis�vel apenas por 1 e por ele mesmo.*/

int resto_divisao(int n1, int n2){
   return n1%n2;
}

void mensagem(){
  printf(" O valor informado � um n�mero Primo");
}

int main(){
  setlocale(LC_ALL, "Portuguese");
  int num, result;

   printf("informe um n�mero? ");
   scanf("%d", &num);

   result = resto_divisao(num,2);

     if (result!= 0) {
      printf("O valor retornado �: %d ", result);



   }else

  return 0;

}
