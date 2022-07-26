#include <stdio.h>
#include <math.h>
//QUESTAO 05 -  FACA UM PROGRAMA PARA LER O NUMERO DE VOTOS BRANCOS, NULOS E VALIDOS DE UMA ELEICAO.
//CALCULAR E ESCREVER O PERCENTUAL QUE CADA UM REPRESENTA EM RELACAO AO TOTAL DE ELEITORES.

int main ()
{
char percentual = '%';
float VotosBrancos, VotosNulos, VotosValidos, Total;
float VotosBrancosPercent, VotosNulosPercent, VotosValidosPercent;

printf("Leia os votos da eleicao. Calcule e escreva o percentual de cada categoria de votos");

printf("\nInsira o valor dos votos brancos: ");
scanf("%f", &VotosBrancos);

printf("\nInsira o valor dos votos nulos: ");
scanf("%f", &VotosNulos);

printf("\nInsira o valor dos votos Validos: ");
scanf("%f", &VotosValidos);

Total=VotosBrancos+VotosNulos+VotosValidos;
printf("\nO total de votos foi de: %.1f", Total);

VotosBrancosPercent=(VotosBrancos*100)/Total;
VotosNulosPercent=(VotosNulos*100)/Total;
VotosValidosPercent=(VotosValidos*100)/Total;

printf("\nO percentual de votos brancos = %.1f%c", VotosBrancosPercent, percentual);
printf("\nO percentual de votos nulos = %.1f%c", VotosNulosPercent, percentual);
printf("\nO percentual de votos validos = %.1f%c", VotosValidosPercent, percentual);

return 0;
}

