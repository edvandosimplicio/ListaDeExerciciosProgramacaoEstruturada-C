#include <stdio.h>
#include <conio.h>

/*Uma empresa deseja aumentar seus pre�os em 20%. Fa�a um
programa que leia o c�digo e o pre�o de custo de cada produto
e calcule o pre�o novo. Calcule, tamb�m, a m�dia dos pre�os
com e sem aumento. Mostre o c�digo e o pre�o novo de cada
produto e, no final, as m�dias. A quantidade de dados que ser�o
cadastrados � desconhecida.*/

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

printf("A m�dia dos pre�os antigos � de: %.2f",media);
printf("\n");
printf("A m�dia dos pre�os novos � de: %.2f",mediaN);

getche();
return 0;
}
