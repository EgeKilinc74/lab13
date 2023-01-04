#include<stdio.h>
#include <string.h>

int tekMi(int);

int main(){
	
	int x;
	int n;
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
	
	
	if (tekmi(n)==0)
	{
		printf("cift");
	}
	else
	{
	  printf("tek");
	}
	return 0;
}

int tekmi(int n){
	
	int check=0;
	if (n%2==0) 
		return check;
	else check=1;
		return check;
	
	
}
