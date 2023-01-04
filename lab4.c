#include<stdio.h>
#include <string.h>
#include <math.h>

int asal(int sayi){
	int i;
	int check=1;	

	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)//asal degil
		{ 
			check=0;
			break;
		}
	}
			return check;
	}

int armstrong(int sayi){
	int basamak=0;
	int toplam=0;
	int kontrol=0;
	
	while(sayi>0){
		sayi%10;
		basamak++;
	}
	while(sayi>0){
		
		toplam+=pow(sayi%10,basamak);
		sayi/=10;
	}
	if(sayi==toplam)
	{
		kontrol=1;	
	}
	return kontrol;
}

int main(){
	int sayi;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	
	if(armstrong(sayi)==1)
		printf("Sayi armstrong");
	else
    	printf("Armstrong degil");
	
	if(asal(sayi)==0)	
		printf("Sayi asal degil");
	else 
		printf("Sayi asal");
	
	if(armstrong(sayi)==1 && asal(sayi)==1)
		printf("Tum kosulu saglar");
	else 
		printf("Tum kosulu saglamaz");
	
	return 0;
}
// check 1 asal 0 degil		check 1 armstrong 0 degil
