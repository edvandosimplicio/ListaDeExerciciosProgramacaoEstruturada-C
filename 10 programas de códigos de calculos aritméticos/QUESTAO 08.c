#include <stdio.h>
#include <math.h>
/*QUESTAO 08 - UM MOTORISTA DE TAXI DESEJA CALCULAR O RENDIMENTO DO SEU CARRO
NA PRACA. SABENDO SE QUE O PRECO DO COMBUSTIVEL E DE: R$2.59, FACA UM PROGRAMA PARA LER:
A MARCACAO DO ODOMETRO EM (KM) NO INICIO DO DIA, A MARCACAO (KM) NO FINAL DO DIA,
A QUANTIDADE DE LITRTOS DE COMBUSTIVEL GASTO E O VALOR TOTAL (R$) RECEBIDO DOS
PASSAGEIROS. CALCULAR E ESCREVER: A MEDIA DO CONSUMO EM KM/L E O LUCRO (LIQUIDO) DO DIA.*/
int main(){

float km_inicial, km_final, preco_combustivel=2.59;
float combustivel_gastos, valor_total_passageiros, media_consumo, lucro_liquido_do_dia;

printf("\tLeia o odometro inicial e final em km, a quantidade de combustivel gasto e o valor recebido dos passageiros.\t");
printf("\tDepois calcule a media do consumo e o lucro liquido do dia.\t");

printf("\nInsira a marcacao do odometro inicial: ");
scanf("%f", &km_inicial);
printf("\nInsira a marcacao do odometro final: ");
scanf("%f", &km_final);
printf("\nInsira os litros de combustivel gastos: ");
scanf("%f", &combustivel_gastos);
printf("\nInsira o valor total recebido dos passageiros: ");
scanf("%f", &valor_total_passageiros);

media_consumo=(km_final-km_inicial)/combustivel_gastos;
lucro_liquido_do_dia=valor_total_passageiros-(combustivel_gastos*preco_combustivel);

printf("\nA media do consumo e de: %.1fkm/l", media_consumo);
printf("\nO lucro liquido do dia e de: R$%.2f",lucro_liquido_do_dia);

return 0;
}
