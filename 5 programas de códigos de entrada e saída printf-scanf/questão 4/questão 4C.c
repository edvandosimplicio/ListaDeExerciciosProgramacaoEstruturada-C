#include <stdio.h>
#include <stdlib.h>

int main () {
//questão 03//
int A, B, X;
//variaveis declaradas

printf(" inserir o valor de A: ");
scanf("%d", &A );
//usuario digita o valor da variavel A

printf(" inserir o valor de B: ");
scanf("%d", &B );
//usuario digita o valor da variavel B

X=A-B;
//a variavel X recebe A sendo subtraido por B

printf("\n %d - %d = %d", A,B,X);
//resultado no programa da subtração das variaveis A - B

return 0;
}
