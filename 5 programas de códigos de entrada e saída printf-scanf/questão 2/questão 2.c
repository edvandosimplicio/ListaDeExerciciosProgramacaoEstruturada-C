#include <stdio.h>
#include <stdlib.h>

int main () {
//questao 02
char nome[20];
//variáveis declaradas

printf("\n inserir seu nome: " );
scanf("%s", &nome);
//usuario digita seu nome no programa//

printf("ola %s tenha um otimo dia de trabalho!" ,nome);
//mensagem a ser mostrada no programa//

printf("\a");
//som sonoro//
return 0;
}
