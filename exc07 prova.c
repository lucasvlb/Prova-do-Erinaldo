#include <stdio.h>

//7. Desenvolva uma fun��o que receba um n�mero inteiro e determine se ele � par
//ou �mpar. Exiba uma mensagem correspondente para cada caso.


void verificarParOuImpar(int numero) {
    if (numero % 2 == 0) {
        printf("O numero %d � par.\n", numero);
    } else {
        printf("O numero %d � �mpar.\n", numero);
    }
}

int main() {
    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    verificarParOuImpar(numero);

    return 0;
}
