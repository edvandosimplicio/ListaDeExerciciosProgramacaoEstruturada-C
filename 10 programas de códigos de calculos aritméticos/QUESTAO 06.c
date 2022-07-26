#include <stdio.h>
#include <math.h>
//QUESTAO 06 - FACA UM PROGRAMA QUE LEIA O NUMERO TOTAL DE PRESTACOES DE UM CONSORCIO, O TOTAL DE PRESTACOES PAGAS
//E O VALOR ATUAL DA PRESTACAO. O PROGRAMA DEVE CALCULAR E APRESENTAR O SALDO DEVEDOR ATUAL E A QUANTIDADE DE PRESTACOES SEM PAGAR.
int main()
{
float TotalPrestacoes, PrestacoesPagas, ValorAtualPrestacao, SaldoDevedorAtual, PrestacoesSemPagar;

printf("\tLeia o numero total de prestacoes, o total de prestacoes pagas e o valor atual da prestacao.\t");
printf ("\n\tDepois calcule e apresente o saldo devedor atual e a quantidade de prestacoes sem pagar.\t");

printf("\nInserir o numero total de prestacoes: ");
scanf("%f", &TotalPrestacoes);

printf("\nInserir o numero de prestacoes pagas: ");
scanf("%f", &PrestacoesPagas);

printf("\nInserir o numero atual da prestacao: ");
scanf("%f", &ValorAtualPrestacao);

SaldoDevedorAtual=(TotalPrestacoes*ValorAtualPrestacao)-ValorAtualPrestacao*PrestacoesPagas;
PrestacoesSemPagar=TotalPrestacoes-PrestacoesPagas;

printf("\nO saldo devedor atual e de: %.1f e a quantidade de prestacoes sem pagar e de: %.1f ", SaldoDevedorAtual, PrestacoesSemPagar);
return 0;
}

