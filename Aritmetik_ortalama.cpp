#include<stdio.h>
main()
{
	int a,b,c,d,e;
	
	float aritmetik;
	printf("Aritmetik ortalama hesaplamasi icin 5 sayi giriniz:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	aritmetik=(a+b+c+d+e)/5.0;
	printf("Gridiginiz sayilarin ortalamasi:%.1f",aritmetik);
	return 0;
	
}
