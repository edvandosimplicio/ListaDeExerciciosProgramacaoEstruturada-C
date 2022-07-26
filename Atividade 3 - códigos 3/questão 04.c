#include <stdio.h>

int ano_nascimento(){
int ano_de_nascimento, resultado;
printf("\n\nusuario digite seu ano de nascimento: ");
scanf("%d", &ano_de_nascimento);

resultado=2021-ano_de_nascimento;
return resultado;
}
int main(){
int idade_do_usuario;

printf("retorno da idade do usuario");

idade_do_usuario=ano_nascimento();

printf("\nusuario, sua idade e: %d anos", idade_do_usuario);
}
