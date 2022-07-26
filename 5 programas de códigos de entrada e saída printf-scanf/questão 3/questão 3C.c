#include <stdio.h>

int main () {
//questao 03
int ano, idade, 2020;
char nome[20];
//variaveis declaradas//

printf("leia o nome de usuario e a sua idade e diga quantos anos tera em 2020");
//defini��o/titulo do programa

printf("\ninserir seu nome: ");
scanf("%s", nome);
//usuario digita seu nome no programa

printf("inserir ano em que voce nasceu: ");
scanf("%d", &ano);
//usuario digita o ano de nascimento no programa

idade = 2020 - ano;
//variavel idade recebendo a variavel 2020 subtraido pelo ano que o usuario nasceu

printf("%s, em 2020 voce estara com %d anos", idade);
//resultado da subtra��o e de quantos anos o usuario ter� em 2020

return 0;
}
