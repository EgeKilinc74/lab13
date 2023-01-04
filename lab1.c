#include <stdio.h>
#include <string.h>

int alan(int);
	

int main(){
	int x;
	printf("Alanini bulmak istediginiz karenin kenar uzunlugunu giriniz:");
	scanf("%d",&x);	
	printf("%d",alan(x));
	
	return 0;
}

int alan(int x){
	
	return x*x;
}
