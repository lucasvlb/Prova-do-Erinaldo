#include<stdio.h>
#include<locale.h>

void recebernota( float nota){
	
	if (nota >= 7){
	 printf(" O Aluno est� aprovado.");
		
	}
	else{
     printf(" O Aluno est� reprovado.");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota;
	
	printf("informe a nota do Aluno? ");
	scanf("%f", &nota);
	
	recebernota(nota);
	

	return 0;
	
}
