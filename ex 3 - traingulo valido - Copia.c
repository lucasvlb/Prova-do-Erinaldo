#include<stdio.h>
#include<locale.h>


/*3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
retornar 1. Caso contrário, não deve retornar nada.*/


//4 e 6 e 9 - triangulo valido
//3 e 2 e 7 - triangulo invalido

int triangulov (float a, float b, float c){
	
	if ((a + b > c) && (a + c > b) && (b + c > a)){
	
	 return 1;
}  
    return 0;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b , c;
	
	printf("Informe o primeiro lado do triangulo? ");
	scanf("%f", &a);
	printf("Informe o segundo lado do triangulo? ");
	scanf("%f", &b);
	printf("Informe o terceiro lado do triangulo? ");
	scanf("%f", &c);
	
	if(triangulov(a,b,c)){
	
	 printf(" O triangulo é valido.");
	 
}
    	

      return 0;
  }
