#include <stdio.h>
#include <math.h>
/*Faça um programa para um caixa eletrônico, que lê o valor
que o cliente quer sacar e calcula o menor número possível de
notas de 100, 50, 20 e 10 reais em que o valor lido pode ser
decomposto. Escrever o valor do saque e a relação de notas
necessárias. Suponha que o sistema monetário não utiliza
centavos. Atenção: Só digite números múltiplos de 10.
Exemplo: Valor: R$ 380,00
Notas de R$ 100,00: 3
Notas de R$ 50,00: 1
Notas de R$ 20,00: 1
Notas de R$ 10,00: 1*/
int main(){
int valor,cliente_valor,numero_100,numero_50,numero_20,numero_10;
printf("\tFaca um programa para um caixa eletronico que leia o valor que o cliente queira sacar, calcule");
printf("\n\to menor numero possivel de notas de 100, 50, 20 e 10 e que o valor lido possa ser decomposto.");
printf("\n\tEm seguida escreva o valor do saque e a relacao das notas necessarias.");

printf("\nInsira o valor que queira sacar: ");
scanf("%d",&valor);

cliente_valor=valor;
numero_100=valor/100;
valor=valor-numero_100*100;
numero_50=valor/50;
valor=valor-numero_50*50;
numero_20=valor/20;
valor=valor-numero_20*20;
numero_10=valor/10;
valor=valor-numero_10*10;

printf("Valor: R$%d\n", cliente_valor);
printf("Notas de R$100: %d\n", numero_100);
printf("Notas de R$50: %d\n", numero_50);
printf("Notas de R$20: %d\n", numero_20);
printf("Notas de R$10: %d\n", numero_10);

return 0;
}
