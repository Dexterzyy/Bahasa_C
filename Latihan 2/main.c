#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int berat_badan, tinggi_badan;

	int lebih2, kurang2;

	printf("Masukan berat badan anda	: ");
	scanf("%d", &berat_badan);
	printf("Masukan tinggi badan anda	: ");
	scanf("%d", &tinggi_badan);

	// Menentukan berat bada ideal
	tinggi_badan = (tinggi_badan - 100) - 0.1;

	// selisih 2
	lebih2 = tinggi_badan + 2;
	kurang2 = tinggi_badan - 2;

	if (berat_badan <= lebih2 && berat_badan >= kurang2)
	{
		printf("\nBerat badan anda ideal");
	}
	else
	{
		printf("\nBerat badan anda tidak ideal");
	}

	return 0;
}
