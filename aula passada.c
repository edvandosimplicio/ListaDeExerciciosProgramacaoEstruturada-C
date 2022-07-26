#include <stdio.h>

int cod_produto, cadastro, qtd_produto;
float preco_custo,preco_novo,media_custo, media_novo;

int main(void)
{

qtd_produto = 1; // Inicia o contador do programa para calculo da média

printf("Se Para Cadastrar (1) - Para parar (0) \n\n");

scanf("%d",&cadastro);

while(cadastro >= 1)
{

printf("\n Informe o codigo a ser cadastrado \n\n");

scanf("%d",&cod_produto);

printf("\n Informe o preço de custo \n\n");

scanf("%f",&preco_custo);

preco_novo = preco_custo * 1.2;

media_custo = (media_custo + preco_custo)/qtd_produto;
media_novo = (media_novo + preco_novo)/qtd_produto;

printf("\n Codigo produto é:%d preco custo R$ %.2f, Preco novo é R$ %.2f",cod_produto, preco_custo, preco_novo);
printf("\n Media de preço bruto produtos R$ %.2f\n", media_custo);
printf("\n Media de preço Novo produtos R$ %.2f\n", media_novo);

qtd_produto = qtd_produto + 1;

printf("Se Para Cadastrar (1) - Para parar (0) \n\n");
scanf("%d",&cadastro);

}
printf("\nFIM DO PROGRAMA - FIM DO CADASTRO\n");

return 0;
}
