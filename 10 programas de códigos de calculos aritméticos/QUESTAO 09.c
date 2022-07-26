#include <stdio.h>
#include <math.h>
/*QUESTAO 09 - FACA UM PROGRAMA Q LEIA OS PRECOS DE UMA MERCADORIA EM ABRIL E MAIO.
TENDO COMO BASE A VARIACAO DOS PRESOS DESTA MERCADORIA, CALCULE A TAXA DE INFLACAO.*/
int main () {
float mercadoria_abril, mercadoria_maio, taxa_inflacao;

printf("\tLeia os precos da mercadoria de Abril e Maio e calcule a taxa de inflacao baseado na variacao das mercadorias.\t");

printf("\nInsira o valor da mercadoria de Abril: ");
scanf("%f", &mercadoria_abril);
printf("\nInsira o valor da mercadoria de Maio: ");
scanf("%f", &mercadoria_maio);

taxa_inflacao = (mercadoria_maio/mercadoria_abril-1)*100;

printf("\nA taxa de inflacao e de %.2f%%", taxa_inflacao);

return 0;
}
