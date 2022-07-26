#include <stdio.h>

int Resto_Divisao(){
int A, B, R;
printf("Informe o primeiro valor: ");
scanf("%d", &A);
printf("Informe o segundo valor: ");
scanf("%d", &B);
R=A%B;

return R;
}

int main(){

int Resto_da_Divisao;
printf("Programa para saber o resto da divisao\n");
Resto_da_Divisao=Resto_Divisao();
printf("O resto da divisao e %d", Resto_da_Divisao);
return 0;
}
