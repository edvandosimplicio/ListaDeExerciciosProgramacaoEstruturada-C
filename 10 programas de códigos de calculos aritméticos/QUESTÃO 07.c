#include <stdio.h>
#include <math.h>
//QUESTÃO 07 - DADA AS SEGUINTES ENTRADAS: QUILOMETRAGEM INICIAL, QUILOMETRAGEM FINAL, LITROS CONSUMIDOS, PRECO DO LITRO DE COMBUSTIVEL.
//FACA UM PROGRAMA Q IMPRIMA O SEGUINTE RELATORIO: DISTANCIA PERCORRIDA, VALOR TOTAL GASTO E O CONSUMO DO CARRO(QUANTOS QUILOMETROS PERCORRE
//COM 1 LITRO DE COMBUSTIVEL).
int main () {
float quilometragem_inicial, quilometragem_final, litros_consumidos, preco_do_litro;
float distancia_percorrida, valor_total_gasto, consumo_veiculo;

printf("\tLeia as indagacoes sobre a quilometragem percorrida e o consumo de um veiculo, calcule e de os resultados\t");

printf("\nInsira a quilometragem inicial: ");
scanf("%f", &quilometragem_inicial);

printf("\nInsira a quilometragem final: ");
scanf("%f", &quilometragem_final);

printf("\nInsira a quantidade de litros consumidos: ");
scanf("%f", &litros_consumidos);

printf("\nInsira o preco do litro: ");
scanf("%f", &preco_do_litro);

distancia_percorrida=quilometragem_final-quilometragem_inicial;
valor_total_gasto=litros_consumidos*preco_do_litro;
consumo_veiculo=distancia_percorrida/litros_consumidos;

printf("\nA distancia percorrida foi de: %.2f", distancia_percorrida);
printf("\nO valor total gasto foi de: %.2f", valor_total_gasto);
printf("\nO consumo do veiculo foi de: %.2f", consumo_veiculo);

return 0;
}
