#include <stdio.h>
//8. Elabore uma fun��o que calcule o imposto sobre um sal�rio com base no valor
//recebido. Se o sal�rio for maior que R$ 5.000,00, o imposto ser� de 20%. Caso
//contr�rio, o imposto ser� de 10%. A fun��o deve exibir o valor do imposto a ser
//pago. 


void calcularImposto(double salario) {
    double imposto;

    if (salario > 5000.00) {
        imposto = salario * 0.20; 
    } else {
        imposto = salario * 0.10; 
    }

    printf("O valor do imposto a ser pago �: R$ %.2f\n", imposto);
}

int main() {
    double salario;


    printf("Digite o sal�rio: R$ ");
    scanf("%lf", &salario);

    
    calcularImposto(salario);

    return 0;
}
