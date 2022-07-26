#include <stdio.h>
#include <math.h>

//QUESTAO 04 - FACA UM PROGRAMA PARA LER O SALARIO DO USUARIO E O PERCENTUAL DE REAJUSTE.
//CALCULAR E ESCREVER O VALOR DO NOVO.

int main ()
{
float salario, reajuste, NovoSalario;

printf("\tLeia o salario atual, leia o reajuste desse salario e calcule o novo valor ");

printf("\nInsira o salario mensal: ");
scanf("%f", &salario);

printf("\nInsira o percentual de reajuste: ");
scanf("%f", &reajuste);

NovoSalario = salario+(salario*reajuste/100);

printf("\nO seu novo salario reajustado e de R$: %.2f", NovoSalario);

return 0;
}
