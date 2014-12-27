#include <stdio.h>
#include <stdlib.h>


int main()
{
	float bolunecek = 0;
	int sayi = 0;
	int dizi[100] = {0};
	int j = 0;
	int i = 0;
	double bolum = 0;
	
	
	printf("Çarpanlarına ayrılacak sayıyı giriniz : ");
	
	scanf("%d",&sayi);
	
	if(sayi < 2)
	{
		printf("1 den büyük tam sayı giriniz !");
	}
	else
	{
		bolunecek = sayi;
		printf("\n");
		for(i = 2; i <= (int)(sayi/2); i++) // sayının yarısına kadar gelmemiz yeterli
		{
			bolum = bolunecek/i;
			if((int)bolum == bolum) // i sayıyı tam bölüyorsa
			{
				dizi[j++] = i; // diziye kaydet
				bolunecek /= i; // sayıyı  böl
				i--;
			}
		}
		
		
		if(j == 0)
		{
			printf("%d asal sayıdır", sayi);
		}
		else
		{
			printf("%d = ", sayi);
			for(i = 0 ; i < j ; i++)
			{		
				printf("%d",dizi[i]);
				if(j - i != 1)
				{
					printf(".");
				}
			}
		
		}
	}

}
