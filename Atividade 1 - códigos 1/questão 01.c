#include <stdio.h>
#include <conio.h>

/*Uma empresa deseja aumentar seus preços em 20%. Faça um
programa que leia o código e o preço de custo de cada produto
e calcule o preço novo. Calcule, também, a média dos preços
com e sem aumento. Mostre o código e o preço novo de cada
produto e, no final, as médias. A quantidade de dados que serão
cadastrados é desconhecida.*/

int main(){

float valor[50], media, mediaN;
int produtos, i;

printf("Digite a quantidade de produtos: ");
scanf("%d",&produtos);
printf("\n");

for(i=1;i<=produtos;i++)
{
printf("Digite o valor do produto ");
scanf("%f",&valor[i]);
media += valor[i];
}
printf("\n");

for(i=1;i<=produtos;i++)
{
printf("O novo valor dos produtos e de %.2f\n", (valor[i]*0.20)+valor[i]);
mediaN+=(valor[i]*0.20)+valor[i];
}
printf("\n");
media=media/produtos;
mediaN=mediaN/produtos;

printf("A média dos preços antigos é de: %.2f",media);
printf("\n");
printf("A média dos preços novos é de: %.2f",mediaN);

getche();
return 0;
}
