#include <stdio.h>
#include <string.h>
 
int main()
{
    int i;
    int kelime=1;
	char cumle[100];
    
	printf("Bir cumle giriniz: ");
    gets(cumle);
    
    for(i=0 ; i<100 ; i++)
	{
    	if(cumle[i]==' ' || cumle[i]==',' || cumle[i]=='\'' || cumle[i]=='.')
		{
    		kelime++;	
		}	
			
	}
	
		if(cumle[0]==' ' )
		{
				kelime-=1;
		}

	printf("%d",kelime);
		
    return 0;
}
