#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int opt;
    printf("Que turno � no momento?\n{1} Manh�\n{2} Tarde\n{3} Noite\nResposta: ");
    scanf("%d", &opt);
    
    switch(opt) {
        case 1: 
            printf("Bom dia flor do dia! Seja bem-vindo(a)");
            break;
            
        case 2:
            printf("Boa tarde campe�o! Seja bem-vindo(a)");
            break;
            
        case 3:
            printf("Boa noite querido(a)! Seja bem-vindo(a)");
            break;
            
        default: 
            printf("Resposta invalida, tente novamente");
            break;
    }

    return 0;
}
