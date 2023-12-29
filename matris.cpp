#include<stdio.h>
main()
{
	// Klavyeden 9 tane sayý girdisi alýnacaktýr ve bu girilen sayýlarý 3x3lük mir matris haline getiren program.
	
	int matris[3][3];
	int i,j;
	
	printf("9 tane sayi giriniz:");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			
			
			scanf("%d",&matris[i][j]);
			
		}
		
	}
	
	printf("\n\n\n Matris Hazirlaniyor... \n\n\n");

	for(i=0;i<3;i++)
	{
		
		printf("|");
		
		for(j=0;j<3;j++)
		{
			
			printf("%d",matris[i][j]);
			
		}
		
		printf("|\n");
	}
	
	
	
}
