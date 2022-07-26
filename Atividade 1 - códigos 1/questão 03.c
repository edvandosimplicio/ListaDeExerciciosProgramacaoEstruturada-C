#include <stdio.h>
/*
Escrever um programa que leia 5 pares de valores, o primeiro
valor é a matrícula do aluno, e o segundo a sua altura em
centímetros. Encontre o aluno mais alto e o mais baixo. Mostre
a matrícula do aluno mais alto e do mais baixo, junto com suas
alturas.
*/
int main()
{
int matricula_do_aluno = 1;
float altura_aluno;
float aluno_mais_alto, aluno_mais_baixo;
int matricula_mais_alto, matricula_mais_baixo;

while(matricula_do_aluno<=5){
fflush(stdin);
printf("Informe a altura do aluno de matricula %d em metros: ", matricula_do_aluno);
scanf("%f", &altura_aluno);
if (matricula_do_aluno == 1){
aluno_mais_alto = altura_aluno;
matricula_mais_alto = matricula_do_aluno;
}
if (aluno_mais_alto < altura_aluno){
aluno_mais_alto = altura_aluno;
matricula_mais_alto = matricula_do_aluno;
}
if (matricula_do_aluno == 1){
aluno_mais_baixo = altura_aluno;
matricula_mais_baixo = matricula_do_aluno;
}
if (aluno_mais_baixo > altura_aluno){
aluno_mais_baixo = altura_aluno;
matricula_mais_baixo = matricula_do_aluno;
}
matricula_do_aluno++;
}
printf("O aluno mais alto é o de matricula %d tendo %.2f metros\n", matricula_mais_alto, aluno_mais_alto);
printf("O aluno mais baixo é o de matricula %d tendo %.2f metros\n", matricula_mais_baixo, aluno_mais_baixo);

return 0;
}
