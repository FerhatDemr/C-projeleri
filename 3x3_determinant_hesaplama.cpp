#include<stdio.h>
main()
{
	//Kullanıcidan alinan 9 tane sayiyi 3x3lük matris haline getirip determinantini bulan program.
	
	
	int s11,s12,s13;
	int s21,s22,s23;
	int s31,s32,s33;
	int i,j;
	int matris[3][3];
	int determinant;
	
	
	printf("Determinanti bulmak icin 3x3 seklinde 9 tane sayi giriniz:\n");
	
	for (i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			scanf("%d",&matris[i][j]);
		}
	}
	
    for (i=0;i<3;i++)
	{
		printf("|");
		for(j=0;j<3;j++)
		{
			printf("%d",matris[i][j]);
		}
		printf("|\n");
	}
	
	// 1. Satir elemanlari
	s11= matris[0][0];
	s12= matris[0][1];
	s13= matris[0][2];
	
	//2. Satir elemanlari
	s21= matris[1][0];
	s22= matris[1][1];
	s23= matris[1][2];
	
	//3. Satir elemanlari
	s31= matris[2][0];
	s32= matris[2][1];
	s33= matris[2][2];
	
	/*   
	     | s11  s12  s13|
	     | s21  s22  s23|         
	     | s31  s32  s33|
	*/
	
	determinant=((s11*s22*s33)+(s21*s32*s13)+(s31*s12*s23))-((s31*s22*s13)+(s11*s32*s23)+(s21*s12*s33));
	
	
	printf("Determinant:%d",determinant);

}
