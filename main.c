#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Soal
/*	Seekor semut menempuh perjalanan sejauh x cm. tulislah algoritma untuk mengkonversi jarak x
	kedalam kilometer-meter-sentimeter. jadi misal x = 241378 cm, ini berati
	semut menempuh jarak sejauh 2 km + 41 m + 378 cm
*/

int main(int argc, char *argv[])
{
	int input_km, input_m, input_cm;

	printf("Seekor semut menempuh perjalanan sejauh: ");
	scanf("%1d%2d%3d", &input_km, &input_m, &input_cm);

	printf("Semut menempuh jarak sejauh %d km + %d m + %d cm ", input_km, input_m, input_cm);
	return 0;
}
