#include <stdio.h>

float media_nota(){
float A, B, C, M;
printf("Digite a primeira nota: ");
scanf("%f", &A);
printf("Digite a segunda nota: ");
scanf("%f", &B);
printf("Digite a terceira nota: ");
scanf("%f", &C);
M=(A+B+C)/3;
return M;
}

int main()
{
float media;
printf("Funçao calcular a media do aluno\n");
media=media_nota();
printf("A media do aluno foi: %.2f", media);

return 0;
}
