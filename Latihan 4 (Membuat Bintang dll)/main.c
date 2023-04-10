#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{

	int i, j, menu;

	// inputan
	int panjang, lebar;
	
	//case1
	int input1;
	
	//case2
	int menu2;
	int ke_bawa, ke_atas;
	
	//case3
	int baris;
	
	//case0
	char keluar;
	
	do
	{
		system("cls");
		printf("\n-------- Latihan Membuat Bintang dll --------");
		printf("\n1. Input Panjang dan Lebar");
		printf("\n2. Show Lemari");
		printf("\n3. Segitiga");
		printf("\n0. Exit");
		printf("\n\n>>>>> "); scanf("%d", &menu);
		
		switch(menu)
		{
			case 1:
				{
					input1 = 0;
					printf("Masukan Panjang	: "); scanf("%d", &panjang);
					
					while(input1 != 1)
					{
						printf("Masukan Lebar	: "); scanf("%d", &lebar);
						
						if(panjang == lebar)	
						{
							printf("\n\t[!] Lebar tidak boleh sama dengan Panjang\n\n");
							continue;
						}
						else
						{
							printf("\n\tInput berhasil !");
							input1++;
						}
					}
				}
				break;
			
			case 2:
				{
					if(input1 == 0)
					{
						printf("\n\t[!]Input Panjang dan Lebar terlebih dahulu");
					}
					else
					{
						do
						{
							system("cls");
							printf("\n-------- Show Lemari -----");
							printf("\n1. Lihat Lemari");
							printf("\n2. Putar ke bawa");
							printf("\n3. Putar ke atas");
							printf("\n4. Kembali ke menu");
							printf("\n>>>>> "); scanf("%d", &menu2);
							
							switch(menu2)
							{
								case 1:
									{
										if(ke_bawa == 0 && ke_atas == 0 ) // Ke atas
										{
											for(i = 1; i <= lebar; i++)
											{
												for(j = 1; j <= panjang; j++)
												{
													printf("| ");
												}
												printf("\n");
											}
										}
										else // Ke bawa
										{
											for(i = 1; i <= panjang; i++)
											{
												for(j = 1; j <= lebar; j++)
												{
													printf("| ");
												}
												printf("\n");
											}
										}
									}
								break;
								
								case 2:
									{
										if(ke_bawa == 0)
										{
											for(i = 1; i <= panjang; i++)
											{
												for(j = 1; j <= lebar; j++)
												{
													printf("| ");
												}
												printf("\n");
											}
												ke_atas++;
												ke_bawa++;
										}
										else
										{
											printf("\n\tPutar duluh !");
										}
									}
								break;	
								
								case 3:
									{
										if(ke_atas == 1)
										{
											for(i = 1; i <= lebar; i++)
											{
												for(j = 1; j <= panjang; j++)
												{
													printf("| ");
												}
												printf("\n");
											}
												ke_bawa = 0;
												ke_atas = 0;
										}
										else
										{
											printf("\n\tPutar duluh !");
										}
									}
								break;
								
								case 4:
									{
									}
								break;
								
								default :
									{
										printf("\n\tMenu tidak ada !");
									}
								break;
								
							} getch();
						} while(menu2 != 4);
					}
				}
				break;
			
			case 3:
				{
					 printf("Masukan jumlah baris: "); scanf("%d", &baris);
					 
					 for(i = 1; i <= baris; i++)
					 {
					 	for(j = 1; j <= i; j++)
					 	{
					 		printf("* ");
						}
						printf("\n");
					 }
				}
				break;
				
			case 0:
				{
					printf("Apakah anda akan keluar dari program (y/n): "); scanf(" %c", &keluar);
				}
				break;
				
			default :
				{
					printf("\n\tMenu tidak ada [!]");
				}
				break;
		} getch();
	} while (keluar != 'y' && keluar != 'Y');
	
	printf("\n\tAntonius Hardiantono Karurukan");
	return 0;
}
