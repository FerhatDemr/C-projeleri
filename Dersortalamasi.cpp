#include<stdio.h>
main()
{
	int vize,final;
	float dersort;
	
	printf("Vize notunu giriniz:");
	scanf("%d",&vize);
	printf("Final notunu giriniz:");
	scanf("%d",&final);
	
	dersort=(vize*0.4+final*0.6);
	
	if(dersort>60){
		printf("Dersten gectiniz.");
		
	}
	else if (final<35){
		
		printf("Bute girmek zorundasiniz...");
	}
	
	else {
		printf("Dersten kaldiniz.");
	}
	
	
	
	
	return 0;
}
