#include <stdio.h>
/*
Pablo tem 1,50 m e cresce 2 centímetros por ano, enquanto
Edson tem 1,10 m e cresce 3 centímetros por ano. Construa
um programa que calcule e imprima quantos anos serão
necessários para que Edson seja maior que Pablo.
*/
int main()
{
float Pablo=1.50, Edson=1.10;
float PabloCres=0.02, EdsonCres=0.03;
int anos=1;
while(Edson<=Pablo){
Edson+=EdsonCres;
Pablo+=PabloCres;
anos++;
}
printf("Edson sera maior que Pablo em %d anos", anos);

return 0;
}
