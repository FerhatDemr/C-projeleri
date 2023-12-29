#include<stdio.h>
main()
{
	// Kullanıcıdan 4 tane sayı girdisi alıp bu sayıları matris içine yerleştiren ve bu matrisin determinantını hesaplayan program.
	int i,j;
	int a,b,c,d;
	int determinant;
	int matris[2][2];

	printf("4 tane sayi giriniz:");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
			scanf("%d",&matris[i][j]);
			
			
		}
		


		
		
	}

	for(i=0;i<2;i++)
	{
		printf("|");
		for(j=0;j<2;j++)
		{
		
			printf("%d",matris[i][j]);
		}
		printf("|\n");
	}
	
	a=matris[0][0];
	b=matris[0][1];
	c=matris[1][0];
	d=matris[1][1];
	
	determinant= (a*d )- (b * c);
	
	
	
	printf("Determinant:%d",determinant);
	
	
	
	
	
}
