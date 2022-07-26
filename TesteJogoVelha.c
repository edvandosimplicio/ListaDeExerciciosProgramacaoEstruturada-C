#include <stdio.h>

int main()
{
	int jogo_velha[3][3], jogo_teste[3][3], numero_teste, vez_quem, onde_joga;
	int verificar_X, verificar_O, finalizar;
	char jogo_X[3][3];
	char jogo_O[3][3];
	numero_teste = 0;
	vez_quem = 0;
	onde_joga = 0;
	finalizar = 0;

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			numero_teste = numero_teste + 1;
			jogo_velha[a][b] = numero_teste;
			jogo_teste[a][b] = 0;
			jogo_X[a][b] = 'X';
			jogo_O[a][b] = 'O';
		}
	}
	do
	{
		printf("\e[H\e[2J");
		vez_quem = vez_quem + 1;
			for (int a = 0; a < 3; a++)
			{
				printf ("+---+---+---+\n");
					for (int b = 0; b < 3; b++)
					{
						if (jogo_teste[a][b] == 1)
						{
							printf("|  %c",jogo_X[a][b]);
						}
						if (jogo_teste[a][b] == 2)
						{
							printf("|  %c", jogo_O[a][b]);
						}
						if (jogo_teste[a][b] == 0)
						{
							printf("|  %d", jogo_velha[a][b]);
						}
					}
					printf("|\n");
			}
			printf("+---+---+---+\n");
			for (int a = 0; a < 3; a++)
			{
				if (jogo_teste[a][0] == 1 && jogo_teste[a][1] == 1 && jogo_teste[a][2] == 1)
				{
					finalizar = 10;
					vez_quem = 0;
					printf("\nO jogador X ganhou\n\n");
				}
				if (jogo_teste[a][0] == 2 && jogo_teste[a][1] == 2 && jogo_teste[a][2] == 2)
				{
					finalizar = 10;
					vez_quem = 0;
					printf("\nO jogador O ganhou\n\n");
				}
			}
		for (int b = 0; b < 3; b++)
		{
			if (jogo_teste[0][b] == 1 && jogo_teste[1][b] == 1 && jogo_teste[2][b] == 1)
			{
				finalizar = 10;
				vez_quem = 0;
				printf("\nO jogador X ganhou\n\n");
			}
			if (jogo_teste[0][b] == 2 && jogo_teste[1][b] == 2 && jogo_teste[2][b] == 2)
			{
				finalizar = 10;
				vez_quem = 0;
				printf("\nO jogador O ganhou\n\n");
			}
		}
		if (jogo_teste[0][0] == 1 && jogo_teste[1][1] == 1 && jogo_teste[2][2] == 1)
		{
			finalizar = 10;
			vez_quem = 0;
			printf("\nO jogador X ganhou\n\n");
		}
		if (jogo_teste[2][0] == 1 && jogo_teste[1][1] == 1 && jogo_teste[0][2] == 1)
		{
			finalizar = 10;
			vez_quem = 0;
			printf("\nO jogador X ganhou\n\n");
		}
		if (jogo_teste[0][0] == 2 && jogo_teste[1][1] == 2 && jogo_teste[2][2] == 2)
		{
			finalizar = 10;
			vez_quem = 0;
			printf("\nO jogador O ganhou\n\n");
		}
		if (jogo_teste[2][0] == 2 && jogo_teste[1][1] == 2 && jogo_teste[0][2] == 2)
		{
			finalizar = 10;
			vez_quem = 0;
			printf("\nO jogador O ganhou\n\n");
		}
		if (vez_quem == 1)
		{
			do {
				verificar_X = 0;
				printf("Vai jogar [X] em qual posicao?\n");
				scanf("%d", &onde_joga);
					for (int a = 0; a < 3; a++)
					{
						for (int b = 0; b < 3; b++)
						{
							if (jogo_velha[a][b] == onde_joga)
							{
								if (jogo_teste[a][b] == 0)
								{
									jogo_teste[a][b] = 1;
									verificar_X = 1;
								}
							}
						}
					}
				if (verificar_X == 0)
				{
					printf("JOGADA INVALIDA!\n");
				}
			} while (verificar_X == 0);
		}
		if (vez_quem == 2)
		{
			do {
				verificar_O = 0;
				printf("Vai jogar [O] em qual posicao?\n");
				scanf("%d", &onde_joga);

					for (int a = 0; a < 3; a++)
					{
						for (int b = 0; b < 3; b++)
						{
							if (jogo_velha[a][b] == onde_joga)
							{
								if (jogo_teste[a][b] == 0)
								{
									jogo_teste[a][b] = 2;
									verificar_O = 1;
									vez_quem = 0;
								}
							}
						}
					}
				if (verificar_O == 0)
				{
					printf("JOGADA INVALIDA!\n");
				}
			} while (verificar_O == 0);
		}
		finalizar = finalizar + 1;
			if (finalizar == 9)
			{
				vez_quem = 5;
			}
			if (finalizar == 10)
			{
				printf("\nEMPATE\n\n");
			}
	} while (finalizar < 10);

	return 0;
}