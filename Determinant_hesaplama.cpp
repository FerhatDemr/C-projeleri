#include<stdio.h>
main()
{
	// Kullan�c�dan 4 tane say� girdisi al�p bu say�lar� matris i�ine yerle�tiren ve bu matrisin determinant�n� hesaplayan program.
	int i,j;
	int a,b,c,d;
	int determinant;
	int matris[2][2];
	
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
	
	
	
	printf("%d",determinant);
	
	
	
	
	
}
