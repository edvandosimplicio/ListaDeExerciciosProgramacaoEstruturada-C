#include <stdio.h>
#include <stdlib.h>

int main () {
//questao 05
char nome[20], nome_mae[20];
int idade, mae_idade, subtracao;
//variaveis declaradas

printf(" inserir o seu nome: ");
scanf("%s", nome);
//usuario digita seu nome

printf(" inserir a sua idade: ");
scanf("%d", &idade);
//usuario digita sua idade

printf(" inserir o nome da sua mae: ");
scanf("%s", nome_mae);
//usuario digita o nome da mãe

printf(" inserir a idade da sua mae: ");
scanf("%d", &mae_idade);
//usuario digita a idade da mãe

subtracao = mae_idade - idade;
//variavel subtracao recebe mae_idade sendo subtraida por idade

printf("%s, quando voce nasceu, a dona %s tinha %d anos", nome, nome_mae, subtracao);
//resultado no programa da subtracao da idade da mãe com a idade do usuario dando o resultado de quantos anos a mãe tinha quando o usuario nasceu

return 0;
}
