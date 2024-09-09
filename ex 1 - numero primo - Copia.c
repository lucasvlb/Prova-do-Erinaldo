#include<stdio.h>
#include<locale.h>

/*1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
por essa razão, limite a verificação a um conjunto pequeno de números para
verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.*/

int resto_divisao(int n1, int n2){
   return n1%n2;
}

void mensagem(){
  printf(" O valor informado é um número Primo");
}

int main(){
  setlocale(LC_ALL, "Portuguese");
  int num, result;

   printf("informe um número? ");
   scanf("%d", &num);

   result = resto_divisao(num,2);

     if (result!= 0) {
      printf("O valor retornado é: %d ", result);



   }else

  return 0;

}
