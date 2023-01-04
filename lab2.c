#include <stdio.h>
#include <string.h>

float ortalama(int,int,int,int,int);
	

int main(){
	
	int not1,not2,not3,not4,not5;
	printf("Ortalamasini bulmak istediginiz 5 notu giriniz:");
	scanf("%d%d%d%d%d",&not1,&not2,&not3,&not4,&not5);	
	printf("%f",ortalama(not1,not2,not3,not4,not5));
	
	return 0;
}

float ortalama(int not1,int not2,int not3,int not4,int not5){
	
	float ort;
	
	ort=(not1+not2+not3+not4+not5)/5;
	
	return ort;
}
