#include<stdio.h>
#include<locale.h>


//4 e 6 e 9
//3 e 2 e 7

int triangulov (float a, float b, float c){
	
	if ((a + b > c) && (a + c > b) && (b + c > a)){
	
	 return 1;
   }else
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
	
	 printf(" O triangulo � valido.");
	 
    }else {
    	printf(" O triangulo n�o � valido.");
	}
	
	
	
      return 0;
  
  
  	
}
