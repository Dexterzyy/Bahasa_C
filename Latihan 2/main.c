#include <stdio.h>
#include <stdlib.h>

/*							SOAL
	Berat badan ideal ada hubunganya dengan tinggi badan seseorang. Untuk
	menentukan berat badan ideal, tinggi badan dikurangi 100, lalu dikurangi lagi dengan 10%
	dari hasil pengurangan pertama. Tulislah algoritma yang membaca tinggi badan dan berat badan seseorang.
	kemudian tulislah pesan "ideal" jika berat badan orang tersebut hanya berselisih 2 kg dari berat badan ideal, atau
	pesan "tidak ideal" jika tidak berselisih 2 kg dari berat badan ideal.
*/

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
